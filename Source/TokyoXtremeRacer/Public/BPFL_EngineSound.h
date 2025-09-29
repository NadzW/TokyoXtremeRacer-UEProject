#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPFL_EngineSound.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_EngineSound : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_EngineSound();

private:
    UFUNCTION(BlueprintCallable)
    static int32 GetCarTypeRefrectTuneLevel(const int32 in_car_type, const int32 in_tune_level);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeTuneLevelFromEquipTuneLevel(const int32 in_pu_level, const int32 in_intake_level, const int32 in_exahaust_level, const int32 in_transmission_level, const bool in_is_turbo_engine, int32& out_sound_tune_level, int32& out_sound_effect);
    
    UFUNCTION(BlueprintCallable)
    static float ComputeSoundUseRpm(const float in_current_rpm, const float in_min_rpm, const float in_max_rpm, const float in_redzone_rpm, const int32 in_player, const float in_over_redzone_rpm_use_rate);
    
};

