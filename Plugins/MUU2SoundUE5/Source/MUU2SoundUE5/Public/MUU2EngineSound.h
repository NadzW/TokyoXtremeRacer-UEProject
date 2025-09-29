#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundSubmix.h"
#include "MUU2EngineSound.generated.h"

class UAudioComponent;
class USceneComponent;
class USoundBase;
class USoundSubmixBase;

UCLASS(Blueprintable)
class MUU2SOUNDUE5_API AMUU2EngineSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ListenerSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EmitterSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MetaSoundSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmixBase* Submix;
    
public:
    AMUU2EngineSound(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(const float VolumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShiftUp();
    
    UFUNCTION(BlueprintCallable)
    void SetShiftDown();
    
    UFUNCTION(BlueprintCallable)
    void SetRpm(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReverbLevel(const float ReverbLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetListenerSceneComponent(USceneComponent* Listener);
    
    UFUNCTION(BlueprintCallable)
    bool SetEmitterSceneComponent(USceneComponent* InParent);
    
    UFUNCTION(BlueprintCallable)
    void SetAccel(const float Value);
    
    UFUNCTION(BlueprintCallable)
    int32 MaxTuneEffects();
    
    UFUNCTION(BlueprintCallable)
    int32 MaxCarType();
    
    UFUNCTION(BlueprintCallable)
    void Load(const int32 CarType, const int32 TuneEffects, const float VTECrpm);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatus();
    
    UFUNCTION(BlueprintCallable)
    static void Finalize();
    
    UFUNCTION(BlueprintCallable)
    void FadeReverbLevel(const float TargetReverbLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertRpmParam(const float MinRpm, const float MaxRpm, const float CurrentRpm);
    
    UFUNCTION(BlueprintPure)
    static double ComputeDopplerEffect(const FVector ListenerPosition, const FVector PrevListenerPosition, const FVector EmitterPosition, const FVector PrevEmitterPosition, const double VelocityScaler);
    
};

