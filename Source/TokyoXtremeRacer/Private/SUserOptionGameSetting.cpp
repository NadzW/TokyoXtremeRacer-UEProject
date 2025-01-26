#include "SUserOptionGameSetting.h"

FSUserOptionGameSetting::FSUserOptionGameSetting() {
    this->Option_AutoSave = false;
    this->Option_ShftChange = EOP_ShiftChange::OP_AT;
    this->Option_MapLockInPause = false;
    this->Option_MiniMapLock = false;
    this->Option_MiniMap = false;
    this->Option_CourseAssist = false;
    this->Option_MeterUnit = EOP_MeterUnit::OP_METERS;
    this->Option_Meter = false;
    this->Option_BackMirror = false;
    this->Option_DriversInformation = false;
    this->Option_Segment = false;
    this->Option_SpeedTrap = false;
    this->Option_TextSpeed = EOP_TextSpeed::OP_SLOW;
    this->Option_Language = EOP_Language::OP_JAPANESE;
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
}

