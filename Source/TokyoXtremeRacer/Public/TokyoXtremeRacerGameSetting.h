#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TokyoXtremeRacerGameSetting.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TOKYOXTREMERACER_API UTokyoXtremeRacerGameSetting : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DifficultyParameterTable;
    
    UTokyoXtremeRacerGameSetting();

};

