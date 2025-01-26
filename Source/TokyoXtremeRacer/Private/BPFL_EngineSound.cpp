#include "BPFL_EngineSound.h"

UBPFL_EngineSound::UBPFL_EngineSound() {
}

int32 UBPFL_EngineSound::GetCarTypeRefrectTuneLevel(const int32 in_car_type, const int32 in_tune_level) {
    return 0;
}

void UBPFL_EngineSound::ComputeTuneLevelFromEquipTuneLevel(const int32 in_pu_level, const int32 in_intake_level, const int32 in_exahaust_level, const int32 in_transmission_level, const bool in_is_turbo_engine, int32& out_sound_tune_level, int32& out_sound_effect) {
}

float UBPFL_EngineSound::ComputeSoundUseRpm(const float in_current_rpm, const float in_min_rpm, const float in_max_rpm) {
    return 0.0f;
}


