#include "GKSBBGMManagerGameInstanceSubsystem.h"

UGKSBBGMManagerGameInstanceSubsystem::UGKSBBGMManagerGameInstanceSubsystem() {
    this->Helper = NULL;
}

float UGKSBBGMManagerGameInstanceSubsystem::StopBGM(float FadeOutDuration, bool IsTemporary) {
    return 0.0f;
}

void UGKSBBGMManagerGameInstanceSubsystem::PlayBGMFromType(EBGMType Type, float StartTime) {
}

void UGKSBBGMManagerGameInstanceSubsystem::PlayBGMFromSceneList(EBGMSceneForList Scene, bool IsPassing, float StartTime) {
}

void UGKSBBGMManagerGameInstanceSubsystem::PlayBGMFromScene(EBGMScene Scene, bool IsPassing, float StartTime) {
}

void UGKSBBGMManagerGameInstanceSubsystem::PlayBGMFromFreeRunList(bool IsFirstRequestCourseIn, float StartTime) {
}

void UGKSBBGMManagerGameInstanceSubsystem::PlayBGMByType(EBGMType BGMType, float StartTime, bool IsTemporary) {
}

bool UGKSBBGMManagerGameInstanceSubsystem::PlayBGMByKeptInfo() {
    return false;
}

void UGKSBBGMManagerGameInstanceSubsystem::PlayBGMByInfo(EBGMType BGMType, EBGMScene CategoryType, EBGMSceneForList ListType, float StartTime, bool IsPassing, bool IsDefaultFreeRunList, bool IsFirstRequestCourseIn, bool IsUnique, bool IsTemporary) {
}

void UGKSBBGMManagerGameInstanceSubsystem::IsPlayingBGM(bool& IsPlaying, EBGMType& BGMType) {
}

EBGMType UGKSBBGMManagerGameInstanceSubsystem::GetPlayBGMByInfo(EBGMType BGMType, EBGMScene CategoryType, EBGMSceneForList ListType, float StartTime, bool IsPassing, bool IsDefaultFreeRunList, bool IsFirstRequestCourseIn, bool IsUnique, bool IsTemporary) {
    return EBGMType::SND_BGM_INVALID;
}

void UGKSBBGMManagerGameInstanceSubsystem::GetCurrentPlayBGMInfo(EBGMType& BGMType, FString& Path) {
}

void UGKSBBGMManagerGameInstanceSubsystem::GetCurrentBgmPlaybackTime(float& PlaybackTime) {
}


