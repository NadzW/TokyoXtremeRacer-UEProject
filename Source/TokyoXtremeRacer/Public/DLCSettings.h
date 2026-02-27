#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDLCApplicationInfo.h"
#include "DLCSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TOKYOXTREMERACER_API UDLCSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DLCApplicationDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSDLCApplicationInfo> DLCApplicationInfoMapByPlatform;
    
public:
    UDLCSettings();

    UFUNCTION(BlueprintCallable)
    static UDataTable* GetDLCApplicationDataTable();
    
};

