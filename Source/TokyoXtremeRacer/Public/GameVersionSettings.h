#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVersion.h"
#include "GameVersionSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TOKYOXTREMERACER_API UGameVersionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVersion CurrentGameVersion;
    
    UGameVersionSettings();

};

