#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "CutInProductionSubsystemSetting.generated.h"

class UCarCutInProductionHelperBase;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TOKYOXTREMERACER_API UCutInProductionSubsystemSetting : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCarCutInProductionHelperBase> bp_car_cut_in_helper_class_;
    
    UCutInProductionSubsystemSetting();

};

