// MyReflectGameCharacter.cpp

#include "MyReflectGameCharacter.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "MyReflectGameCharacter.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AMyReflectGameCharacter

AMyReflectGameCharacter::AMyReflectGameCharacter()
{
    // Set this character to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Character doesnt have a rifle at start
    bHasRifle = false;

    // Set size for collision capsule
    GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

    // Create a CameraComponent	
    FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
    FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
    FirstPersonCameraComponent->bUsePawnControlRotation = true;

    // Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
    Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
    Mesh1P->SetOnlyOwnerSee(true);
    Mesh1P->SetupAttachment(FirstPersonCameraComponent);
    Mesh1P->bCastDynamicShadow = false;
    Mesh1P->CastShadow = false;
    Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));
}

void AMyReflectGameCharacter::BeginPlay()
{
    // Call the base class  
    Super::BeginPlay();

    APlayerController* PlayerController = Cast<APlayerController>(Controller);
    if (PlayerController)
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }

        PlayerController->InputComponent->BindAction("Fire", IE_Pressed, this, &AMyReflectGameCharacter::ShootLaser);
    }
}

void AMyReflectGameCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMyReflectGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

    // Set up action bindings
    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        // Jumping
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

        // Moving
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyReflectGameCharacter::Move);

        // Looking
        EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyReflectGameCharacter::Look);
    }

    // Set up action bindings
    if (PlayerInputComponent)
    {
      
        // Fire (Shooting Laser)
        PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AMyReflectGameCharacter::ShootLaser);

        Super::SetupPlayerInputComponent(PlayerInputComponent);
    }
    else
    {
        UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Input Component!"), *GetNameSafe(this));
    }
}



void AMyReflectGameCharacter::Move(const FInputActionValue& Value)
{
    // input is a Vector2D
    FVector2D MovementVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        // add movement 
        AddMovementInput(GetActorForwardVector(), MovementVector.Y);
        AddMovementInput(GetActorRightVector(), MovementVector.X);
    }
}

void AMyReflectGameCharacter::Look(const FInputActionValue& Value)
{
    // input is a Vector2D
    FVector2D LookAxisVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        // add yaw and pitch input to controller
        AddControllerYawInput(LookAxisVector.X);
        AddControllerPitchInput(LookAxisVector.Y);
    }
}

void AMyReflectGameCharacter::SetHasRifle(bool bNewHasRifle)
{
    bHasRifle = bNewHasRifle;
}

bool AMyReflectGameCharacter::GetHasRifle()
{
    return bHasRifle;
}

// Function to handle shooting the laser
void AMyReflectGameCharacter::ShootLaser()
{
    FVector CameraLocation;
    FRotator CameraRotation;
    GetActorEyesViewPoint(CameraLocation, CameraRotation);

    FVector TraceStart = CameraLocation;
    FVector TraceEnd = TraceStart + (CameraRotation.Vector() * MaxLaserDistance);

    FHitResult HitResult;

    // Perform a line trace to check what the laser hits
    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(this); // Ignore the player

    if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, CollisionParams))
    {
        // Draw a debug line to visualize the laser
        DrawDebugLine(GetWorld(), TraceStart, HitResult.Location, FColor::Red, false, 2.0f, 0, 2.0f);

        // Calculate reflection vector
        FVector IncomingVector = (HitResult.Location - TraceStart).GetSafeNormal();
        FVector SurfaceNormal = HitResult.ImpactNormal;
        FVector ReflectedVector = IncomingVector - 2 * FVector::DotProduct(IncomingVector, SurfaceNormal) * SurfaceNormal;

        // Calculate the reflected trace
        FVector ReflectedTraceStart = HitResult.Location;
        FVector ReflectedTraceEnd = ReflectedTraceStart + (ReflectedVector * MaxLaserDistance);

        // Draw a debug line for the reflected laser
        DrawDebugLine(GetWorld(), ReflectedTraceStart, ReflectedTraceEnd, FColor::Green, false, 2.0f, 0, 2.0f);
    }
    else
    {
        // Draw a debug line for the laser when it doesn't hit anything
        DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Red, false, 2.0f, 0, 2.0f);
    }
}