#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBGMScene.h"
#include "EBGMSceneForList.h"
#include "EBGMType.h"
#include "Templates/SubclassOf.h"
#include "GKSBBGMManagerGameInstanceSubsystem.generated.h"

class UGKSBBGMManagerHelperBase;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UGKSBBGMManagerGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGKSBBGMManagerHelperBase* Helper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGKSBBGMManagerHelperBase> HelperClass;
    
public:
    UGKSBBGMManagerGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    float StopBGM(float FadeOutDuration, bool IsTemporary);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMFromType(EBGMType Type, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMFromSceneList(EBGMSceneForList Scene, bool IsPassing, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMFromScene(EBGMScene Scene, bool IsPassing, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMFromFreeRunList(bool IsFirstRequestCourseIn, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMByType(EBGMType BGMType, float StartTime, bool IsTemporary);
    
    UFUNCTION(BlueprintCallable)
    bool PlayBGMByKeptInfo();
    
    UFUNCTION(BlueprintCallable)
    void PlayBGMByInfo(EBGMType BGMType, EBGMScene CategoryType, EBGMSceneForList ListType, float StartTime, bool IsPassing, bool IsDefaultFreeRunList, bool IsFirstRequestCourseIn, bool IsUnique, bool IsTemporary);
    
    UFUNCTION(BlueprintCallable)
    void IsPlayingBGM(bool& IsPlaying, EBGMType& BGMType);
    
    UFUNCTION(BlueprintCallable)
    EBGMType GetPlayBGMByInfo(EBGMType BGMType, EBGMScene CategoryType, EBGMSceneForList ListType, float StartTime, bool IsPassing, bool IsDefaultFreeRunList, bool IsFirstRequestCourseIn, bool IsUnique, bool IsTemporary);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentPlayBGMInfo(EBGMType& BGMType, FString& Path);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentBgmPlaybackTime(float& PlaybackTime);
    
};

