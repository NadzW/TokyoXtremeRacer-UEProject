#include "DebugGameInstanceSubsystem.h"

UDebugGameInstanceSubsystem::UDebugGameInstanceSubsystem() {
    this->view_target_is_rival = false;
    this->view_target_is_user = false;
    this->start_run_area_ = ERunArea::ERA_None;
    this->race_mode_ = ERaceMode::Battle;
    this->b_is_debug_text_enable_ = false;
    this->debug_menu_garege_type_ = 0;
    this->is_at = false;
    this->TutorialDisabled = false;
    this->engine_sound_engine_id = 0;
    this->engine_sound_tune_pattern_id = 0;
    this->engine_sound_tune_effect_id = 0;
    this->return_vb_menu = false;
    this->FrontTireType = ECarTireType::Soft;
    this->RearTireType = ECarTireType::Soft;
    this->ViewerFromDebugMenu = false;
    this->EnableRecoveryVehicleConsumables = false;
    this->selected_my_car_id = 0;
}

bool UDebugGameInstanceSubsystem::ReturnIsDebugTextEnable() const {
    return false;
}


