#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EBGMScene.h"
#include "EBGMSceneForList.h"
#include "EBGMType.h"
#include "GKSBBGMManagerHelperBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UGKSBBGMManagerHelperBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Outer;
    
public:
    UGKSBBGMManagerHelperBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float StopBGM(float FadeOutDuration, bool IsTemporary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGMFromType(EBGMType Type, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGMFromSceneList(EBGMSceneForList Scene, bool IsPassing, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGMFromScene(EBGMScene Scene, bool IsPassing, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGMFromFreeRunList(bool IsFirstRequestCourseIn, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGMByType(EBGMType BGMType, float StartTime, bool IsTemporary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayBGMByKeptInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGMByInfo(EBGMType BGMType, EBGMScene CategoryType, EBGMSceneForList ListType, float StartTime, bool IsPassing, bool IsDefaultFreeRunList, bool IsFirstRequestCourseIn, bool IsUnique, bool IsTemporary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsPlayingBGM(bool& IsPlaying, EBGMType& BGMType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EBGMType GetPlayBGMByInfo(EBGMType BGMType, EBGMScene CategoryType, EBGMSceneForList ListType, float StartTime, bool IsPassing, bool IsDefaultFreeRunList, bool IsFirstRequestCourseIn, bool IsUnique, bool IsTemporary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentPlayBGMInfo(EBGMType& BGMType, FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentBgmPlaybackTime(float& PlaybackTime);
    
};

