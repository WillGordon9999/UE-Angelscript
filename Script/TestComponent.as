class UTestComponent : UAngelscriptComponent
{
    UPROPERTY()
    FVector SmallScale = FVector(0.3, 0.3, 0.3);
    UPROPERTY()
    float ScaleRate = 0.2;
    UPROPERTY()
    float CameraRate = 0.2;

    ACharacter Character;
    APlayerController Controller;
    //AController Controller;
    FString KeyCode;
    FVector TargetScale;
    FVector OrigScale;
    bool isPressed = false;
    
    USpringArmComponent ArmComp;
    float OrigArmLength;
    float SmallArmLength;
    float TargetArmLength;

    UCharacterMovementComponent MoveComp;
    float OrigWalkSpeed;
    float SmallWalkSpeed;
    float TargetWalkSpeed;

    UCapsuleComponent Capsule;

    UFUNCTION(BlueprintOverride)
    void BeginPlay()
    {
        //Print("In Begin Play Comp");        
        Character = Cast<ACharacter>(this.GetOuter());
        //if (Character == nullptr) Print("Character null", 5.0f);
        AController control = Character.GetController().Get();
        Controller = Cast<APlayerController>(control);
        KeyCode = FString("F");  
                      
        
        OrigScale = Character.GetActorScale3D();
        TargetScale = OrigScale;        
        
        ArmComp = Cast<USpringArmComponent>(Character.GetComponentByClass(USpringArmComponent::StaticClass()).Get());        
        OrigArmLength = ArmComp.TargetArmLength;
        TargetArmLength = OrigArmLength;
        SmallArmLength = OrigArmLength * SmallScale.X;

        MoveComp = Cast<UCharacterMovementComponent>(Character.GetComponentByClass(UCharacterMovementComponent::StaticClass()).Get());
        OrigWalkSpeed = MoveComp.MaxWalkSpeed;
        TargetWalkSpeed = OrigWalkSpeed;
        SmallWalkSpeed = 400;
        MoveComp.AirControl = 1;
        MoveComp.JumpZVelocity = 500;
        MoveComp.GravityScale = 1.75;
        Character.JumpMaxHoldTime = 0.3;        
        //MoveComp.bApplyGravityWhileJumping = false;

        Capsule = Cast<UCapsuleComponent>(Character.GetComponentByClass(UCapsuleComponent::StaticClass()).Get());    
    }

    UFUNCTION(BlueprintOverride)
    void Tick(float DeltaSeconds)
    {
        //Character.LaunchCharacter(FVector(0.0, 0.0, 1000.0), false, true);        
        FVector CurrentScale = Character.GetActorScale3D();                    
        float CurrentArmLength = ArmComp.TargetArmLength;
        float CurrentWalkSpeed = MoveComp.MaxWalkSpeed;
                
        if (Controller.IsInputKeyDown(FKey(FName(KeyCode))))
        {
            if (!isPressed)
            {                
                if (TargetScale == OrigScale)
                {
                    TargetScale = SmallScale;
                    TargetArmLength = SmallArmLength;
                    TargetWalkSpeed = SmallWalkSpeed;
                    Character.LaunchCharacter(Character.GetVelocity() * Math::Lerp(CurrentScale, TargetScale, ScaleRate), false, false);
                }   
                else
                {
                    TargetScale = OrigScale;
                    TargetArmLength = OrigArmLength;
                    TargetWalkSpeed = OrigWalkSpeed;
                    Character.LaunchCharacter(Character.GetVelocity() * Math::Lerp(CurrentScale, TargetScale, ScaleRate), false, false);
                }
                    
                isPressed = true;
            }                                
        }

        else
        {
            isPressed = false;
        }

        if (CurrentScale != TargetScale)
        {
            Character.SetActorScale3D(Math::Lerp(CurrentScale, TargetScale, ScaleRate));
            Capsule.SetWorldScale3D(Math::Lerp(CurrentScale, TargetScale, ScaleRate)); 
            
        }

        if (CurrentWalkSpeed != TargetWalkSpeed)
        {
            MoveComp.MaxWalkSpeed = Math::Lerp(CurrentWalkSpeed, TargetWalkSpeed, ScaleRate);
            //MoveComp.MaxAcceleration = Math::Lerp(CurrentWalkSpeed, TargetWalkSpeed, ScaleRate);
        }

        if (CurrentArmLength != TargetArmLength)
        {
            ArmComp.TargetArmLength = Math::Lerp(CurrentArmLength, TargetArmLength, CameraRate);
        }
    }

    UFUNCTION(BlueprintOverride)
    void AsyncPhysicsTick(float DeltaSeconds, float SimSeconds)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void EndPlay(EEndPlayReason EndPlayReason)
    {
        
    }
    
};