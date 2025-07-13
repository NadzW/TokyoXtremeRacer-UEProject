#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "AchievementSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TOKYOXTREMERACER_API UAchievementSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AchievementDataTable;
    
    UAchievementSettings();

};

