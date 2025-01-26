#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EBGMType.h"
#include "ECarSEType.h"
#include "EEngineSoundType.h"
#include "ESEType.h"
#include "ESystemSEType.h"
#include "SoundSubsystemHelperBase.generated.h"

class UAudioComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class TOKYOXTREMERACER_API USoundSubsystemHelperBase : public UObject {
    GENERATED_BODY()
public:
    USoundSubsystemHelperBase();

    UFUNCTION(BlueprintCallable)
    void UnLoadSound(const FString& sound_str);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSound(UAudioComponent* audio_component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopBGM(EBGMType bgm_type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVolumeSound(UAudioComponent* audio_component, float volume_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSEMute(ESEType se_type, bool is_mute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEngineMute(bool is_mute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBGMMute(bool is_mute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAudioComponent* PlaySystemSE(UObject* world_context, ESystemSEType se_sys_type, UObject* se_data_object, float volume_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAudioComponent* PlayLocationSound(UObject* world_context, UObject* sound_object, FVector Location, float Volume, float volume_rate, bool is_mute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAudioComponent* PlayEngineSound(UObject* world_context, int32 car_id, EEngineSoundType engine_sound_type, UObject* engine_data_object, USceneComponent* attach_compoment, float volume_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAudioComponent* PlayCarLocationSE(UObject* world_context, ECarSEType se_car_type, UObject* se_data_object, FVector Location, float volume_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAudioComponent* PlayCarAttachSE(UObject* world_context, ECarSEType se_car_type, UObject* se_data_object, USceneComponent* attach_compoment, float volume_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAudioComponent* PlayBGM(UObject* world_context, EBGMType bgm_type, UObject* bgm_sound_object, float volume_rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAudioComponent* PlayAttachSound(UObject* world_context, UObject* sound_object, USceneComponent* attach_compoment, float Volume, float volume_rate, bool is_mute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAudioComponent* Play2DSound(UObject* world_context, UObject* sound_object, float Volume, float volume_rate, bool is_mute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MuteSound(UAudioComponent* audio_component, bool is_mute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(UObject* world_context, bool is_in_game);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeInitialize(UObject* world_context, bool is_in_game);
    
};

