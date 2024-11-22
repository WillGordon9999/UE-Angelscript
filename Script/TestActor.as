class ATestActor : AAngelscriptActor
{
    //UPROPERTY(DefaultComponent, RootComponent)
    //USceneComponent Root;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMesh Mesh;

    ACharacter Character;
    APlayerController Controller;
    FName key;

    UFUNCTION(BlueprintOverride)
    void UserConstructionScript()
    {
           
    }

    UFUNCTION(BlueprintOverride)
    void BeginPlay()
    {
        //Print("Begin Play Hi");
        //key = FName("F");
        //TArray<ACharacter> chars;                             
        //GetAllActorsOfClass(ACharacter::StaticClass(), chars);
        //if (!chars.IsEmpty())
        //{
        //    Character = chars[0];
        //    AController control = Character.GetController().Get();
        //    Controller = Cast<APlayerController>(control);            
        //}
    }

    UFUNCTION(BlueprintOverride)
    void Tick(float DeltaSeconds)
    {
        //if (Controller.IsInputKeyDown(FKey(key)))
        //{
        //    Character.LaunchCharacter(FVector(0.0, 0.0, 1000.0), false, true);
        //}
    }

    UFUNCTION(BlueprintOverride)
    void AsyncPhysicsTick(float DeltaSeconds, float SimSeconds)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void ActorOnClicked(FKey ButtonPressed)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void ActorOnInputTouchBegin(ETouchIndex FingerIndex)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void ActorOnInputTouchEnd(ETouchIndex FingerIndex)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void ActorOnInputTouchEnter(ETouchIndex FingerIndex)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void ActorOnInputTouchLeave(ETouchIndex FingerIndex)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void ActorBeginCursorOver()
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void ActorEndCursorOver()
    {
        
    }
  
    UFUNCTION(BlueprintOverride)
    void ActorOnReleased(FKey ButtonReleased)
    {
        
    }

    
    UFUNCTION(BlueprintOverride)
    void Destroyed()
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void EndPlay(EEndPlayReason EndPlayReason)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void OnReset()
    {
        
    }

     UFUNCTION(BlueprintOverride)
    void Hit(TObjectPtr<UPrimitiveComponent> MyComp, TObjectPtr<AActor> Other,
             TObjectPtr<UPrimitiveComponent> OtherComp, bool bSelfMoved, FVector HitLocation,
             FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void AnyDamage(float Damage, TObjectPtr<UDamageType> DamageType,
                   TObjectPtr<AController> InstigatedBy, TObjectPtr<AActor> DamageCauser)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void PointDamage(float Damage, TObjectPtr<UDamageType> DamageType, FVector HitLocation,
                     FVector HitNormal, TObjectPtr<UPrimitiveComponent> HitComponent, FName BoneName,
                     FVector ShotFromDirection, TObjectPtr<AController> InstigatedBy,
                     TObjectPtr<AActor> DamageCauser, FHitResult HitInfo)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void RadialDamage(float DamageReceived, TObjectPtr<UDamageType> DamageType, FVector Origin,
                      FHitResult HitInfo, TObjectPtr<AController> InstigatedBy,
                      TObjectPtr<AActor> DamageCauser)
    {
        
    }
    
    UFUNCTION(BlueprintOverride)
    void ActorBeginOverlap(TObjectPtr<AActor> OtherActor)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void ActorEndOverlap(TObjectPtr<AActor> OtherActor)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void OnBecomeViewTarget(TObjectPtr<APlayerController> PC)
    {
        
    }

    UFUNCTION(BlueprintOverride)
    void OnEndViewTarget(TObjectPtr<APlayerController> PC)
    {
        
    }
};