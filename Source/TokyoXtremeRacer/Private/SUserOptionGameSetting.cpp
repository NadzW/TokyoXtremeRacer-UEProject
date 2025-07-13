#include "SUserOptionGameSetting.h"

FSUserOptionGameSetting::FSUserOptionGameSetting() {
    this->Option_AutoSave = false;
    this->Option_ShftChange = EOP_ShiftChange::OP_AT;
    this->Option_AutoClutch = false;
    this->Option_MapLockInPause = false;
    this->Option_MiniMapLock = false;
    this->Option_MiniMap = false;
    this->Option_CourseAssist = false;
    this->Option_MeterUnit = EOP_MeterUnit::OP_METERS;
    this->Option_MeterLayout = EOP_MeterLayout::OP_METER_LAYOUT_AROUND;
    this->Option_Meter = false;
    this->Option_TireMeter = false;
    this->Option_NitroMeter = false;
    this->Option_InputMeter = false;
    this->Option_BackMirror = false;
    this->Option_BackMirror_BonnetView = false;
    this->Option_DriversInformation = false;
    this->Option_Segment = false;
    this->Option_SpeedTrap = false;
    this->Option_TextSpeed = EOP_TextSpeed::OP_SLOW;
    this->Option_Language = EOP_Language::OP_JAPANESE;
    this->Option_Camera_Swing = 0;
    this->Option_IsRumble = false;
    this->Option_RumbleToCollision = 0;
    this->Option_RumbleToRoad = 0;
    this->Option_RumbleToShiftChange = 0;
    this->Option_RumbleToWheelspin = 0;
    this->Option_RumbleToAero = 0;
    this->Option_RumbleToAbs = 0;
    this->Option_IsCopyPhotoToSteamDir = false;
    this->Option_ViewingAngle = 0;
    this->Option_Brightness = 0;
    this->Option_UpscalingMode = EOP_Upscaling_Mode::OP_OFF;
    this->Option_Sharpness = 0.00f;
    this->Option_FrameGeneration = false;
    this->Option_UpscalingQuality = EOP_Upscaling_Quality::OP_Native;
    this->Option_ScreenPercentage = 0;
    this->Option_MasterVolumn = 0;
    this->Option_BgmVolumn = 0;
    this->Option_SeVolumn = 0;
    this->Option_CarVolumn = 0;
    this->Option_BattleBgmTiming = EOP_BattleBgmTiming::OP_AfterBattleStart;
}

