class UTestComponent : UAngelscriptComponent
{   
    ACharacter Character;
    APlayerController Controller;
    //AController Controller;
    FString KeyCode;

    UFUNCTION(BlueprintOverride)
    void BeginPlay()
    {
        Print("In Begin Play Comp");        
        Character = Cast<ACharacter>(this.GetOuter());
        if (Character == nullptr) Print("Character null", 5.0f);
        AController control = Character.GetController().Get();
        Controller = Cast<APlayerController>(control);        
        KeyCode = FString("F");        
    }

    UFUNCTION(BlueprintOverride)
    void Tick(float DeltaSeconds)
    {        
        if (Controller.IsInputKeyDown(FKey(FName(KeyCode))))
        {
            Character.LaunchCharacter(FVector(0.0, 0.0, 1000.0), false, true);
        }
    }

    UFUNCTION(BlueprintOverride)
    void AsyncPhysicsTick(float DeltaSeconds, float SimSeconds)
    {
        Print("In Async Physics");
    }

    UFUNCTION(BlueprintOverride)
    void EndPlay(EEndPlayReason EndPlayReason)
    {
        Print("End Play");
    }
    
};