#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MUU2BankSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class MUU2SOUNDUE5_API UMUU2BankSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath EmtisBankAsset;
    
    UMUU2BankSettings();

};

