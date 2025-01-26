#include "SSbGraphicSettingInfo.h"

FSSbGraphicSettingInfo::FSSbGraphicSettingInfo() {
    this->Option_DisplayMode = EOP_DisplayMode::OP_FULL_SCREEN;
    this->Option_AspectRatio = EOP_AspectRatio::OP_272_143;
    this->Option_ViewingAngle = 0;
    this->Option_FPS_Limit = EOP_FPS_Limit::OP_UNLIMITED;
    this->Option_Brightness = 0;
    this->Option_HDR = false;
    this->Option_Resolution = EOP_Resolution::OP_1280x720;
    this->Option_DynamicResolution = false;
    this->Option_V_Sync = false;
    this->Option_Scalability = EOP_Scalability::OP_LOW;
    this->Option_DrawDistance = EOP_Scalability::OP_LOW;
    this->Option_AntiAliasing = EOP_Scalability::OP_LOW;
    this->Option_PostProcess = EOP_Scalability::OP_LOW;
    this->Option_Shadow = EOP_Scalability::OP_LOW;
    this->Option_GlobalIllumination = EOP_Scalability::OP_LOW;
    this->Option_Reflection = EOP_Scalability::OP_LOW;
    this->Option_Effect = EOP_Scalability::OP_LOW;
    this->Option_Shading = EOP_Scalability::OP_LOW;
    this->Option_Texture = EOP_Scalability::OP_LOW;
    this->Option_UpscalingMode = EOP_Upscaling_Mode::OP_OFF;
    this->Option_Sharpness = 0.00f;
    this->Option_FrameGeneration = false;
    this->Option_UpscalingQuality = EOP_Upscaling_Quality::OP_Native;
    this->Option_ScreenPercentage = 0;
}

