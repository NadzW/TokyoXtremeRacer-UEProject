#include "SoundWorldSubsystem.h"

USoundWorldSubsystem::USoundWorldSubsystem() {
}

TArray<UObject*> USoundWorldSubsystem::GetExplicitObjectList(UPrimaryAssetLabel* Label) {
    return TArray<UObject*>();
}

UObject* USoundWorldSubsystem::GetExplicitObject(UPrimaryAssetLabel* Label) {
    return NULL;
}

UObject* USoundWorldSubsystem::GetExplicitNumObject(UPrimaryAssetLabel* Label, int32 get_num) {
    return NULL;
}

bool USoundWorldSubsystem::CheckSELoaded(ESEType se_type) {
    return false;
}

bool USoundWorldSubsystem::CheckEngineSoundLoaded(EEngineSoundType engine_sound_type) {
    return false;
}

bool USoundWorldSubsystem::CheckBgmLoaded(EBGMType bgm_type) {
    return false;
}

void USoundWorldSubsystem::AddSEMap(ESEType se_type, UObject* Object) {
}

void USoundWorldSubsystem::AddEngineSoundMap(EEngineSoundType engine_sound_type, UObject* Object) {
}

void USoundWorldSubsystem::AddBgmMap(EBGMType bgm_type, UObject* Object) {
}


