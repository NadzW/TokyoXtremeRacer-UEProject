#pragma once
#include "CoreMinimal.h"
#include "EAbilityEffectType.h"
#include "SAbilityDatabase.h"
#include "SActiveAbilityParameter.h"
#include "SActiveAbilityDatabase.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSActiveAbilityDatabase : public FSAbilityDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityEffectType AbilityEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSActiveAbilityParameter> AbilityParametersPerLevel;
    
    FSActiveAbilityDatabase();
};

