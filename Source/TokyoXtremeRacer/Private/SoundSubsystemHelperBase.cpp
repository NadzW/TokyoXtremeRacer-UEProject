#include "SoundSubsystemHelperBase.h"

USoundSubsystemHelperBase::USoundSubsystemHelperBase() {
}

void USoundSubsystemHelperBase::UnLoadSound(const FString& sound_str) {
}

void USoundSubsystemHelperBase::StopSound_Implementation(UAudioComponent* audio_component) {
}

void USoundSubsystemHelperBase::StopBGM_Implementation(EBGMType bgm_type) {
}

void USoundSubsystemHelperBase::SetVolumeSound_Implementation(UAudioComponent* audio_component, float volume_rate) {
}

void USoundSubsystemHelperBase::SetSEMute_Implementation(ESEType se_type, bool is_mute) {
}

void USoundSubsystemHelperBase::SetEngineMute_Implementation(bool is_mute) {
}

void USoundSubsystemHelperBase::SetBGMMute_Implementation(bool is_mute) {
}

UAudioComponent* USoundSubsystemHelperBase::PlaySystemSE_Implementation(UObject* world_context, ESystemSEType se_sys_type, UObject* se_data_object, float volume_rate) {
    return NULL;
}

UAudioComponent* USoundSubsystemHelperBase::PlayLocationSound_Implementation(UObject* world_context, UObject* sound_object, FVector Location, float Volume, float volume_rate, bool is_mute) {
    return NULL;
}

UAudioComponent* USoundSubsystemHelperBase::PlayEngineSound_Implementation(UObject* world_context, int32 car_id, EEngineSoundType engine_sound_type, UObject* engine_data_object, USceneComponent* attach_compoment, float volume_rate) {
    return NULL;
}

UAudioComponent* USoundSubsystemHelperBase::PlayCarLocationSE_Implementation(UObject* world_context, ECarSEType se_car_type, UObject* se_data_object, FVector Location, float volume_rate) {
    return NULL;
}

UAudioComponent* USoundSubsystemHelperBase::PlayCarAttachSE_Implementation(UObject* world_context, ECarSEType se_car_type, UObject* se_data_object, USceneComponent* attach_compoment, float volume_rate) {
    return NULL;
}

UAudioComponent* USoundSubsystemHelperBase::PlayBGM_Implementation(UObject* world_context, EBGMType bgm_type, UObject* bgm_sound_object, float volume_rate) {
    return NULL;
}

UAudioComponent* USoundSubsystemHelperBase::PlayAttachSound_Implementation(UObject* world_context, UObject* sound_object, USceneComponent* attach_compoment, float Volume, float volume_rate, bool is_mute) {
    return NULL;
}

UAudioComponent* USoundSubsystemHelperBase::Play2DSound_Implementation(UObject* world_context, UObject* sound_object, float Volume, float volume_rate, bool is_mute) {
    return NULL;
}

void USoundSubsystemHelperBase::MuteSound_Implementation(UAudioComponent* audio_component, bool is_mute) {
}

void USoundSubsystemHelperBase::Initialize_Implementation(UObject* world_context, bool is_in_game) {
}

void USoundSubsystemHelperBase::DeInitialize_Implementation(UObject* world_context, bool is_in_game) {
}


