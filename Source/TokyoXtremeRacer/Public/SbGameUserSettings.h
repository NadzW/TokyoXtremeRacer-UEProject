#pragma once
#include "CoreMinimal.h"
#include "SSbGraphicSettingInfo.h"
#include "SSbSoundSettingInfo.h"
#include "GameFramework/GameUserSettings.h"
#include "SbGameUserSettings.generated.h"

class USbGameUserSettings;

UCLASS(Blueprintable, Config=Engine)
class TOKYOXTREMERACER_API USbGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSbGraphicSettingInfo GraphicSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSbSoundSettingInfo SoundSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSbGraphicSettingInfo BenchmarkSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleDebugMessage;
    
    USbGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetSoundSettingInfo(const FSSbSoundSettingInfo sound_info);
    
    UFUNCTION(BlueprintCallable)
    void SetIsVisibleDebugMessage(bool bNewVisiblity);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicSettingInfo(const FSSbGraphicSettingInfo graphic_info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSbSoundSettingInfo GetSoundSettingInfo() const;
    
    UFUNCTION(BlueprintCallable)
    static USbGameUserSettings* GetSbGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVisibleDebugMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSbGraphicSettingInfo GetGraphicSettingInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyDisplayGamma(const float DisplayGamma);
    
};

