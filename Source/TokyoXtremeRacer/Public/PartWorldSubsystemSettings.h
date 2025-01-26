#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "PartWorldSubsystemSettings.generated.h"

class UPartsSubsystemHelperBase;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TOKYOXTREMERACER_API UPartWorldSubsystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPartsSubsystemHelperBase> bp_part_helper_class_;
    
    UPartWorldSubsystemSettings();

};

