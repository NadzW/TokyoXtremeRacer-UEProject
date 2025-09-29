#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VDLWDeveloperSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class VEHICLEDATALOGGERWRAPPER_API UVDLWDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableVL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableADVL;
    
    UVDLWDeveloperSettings();

};

