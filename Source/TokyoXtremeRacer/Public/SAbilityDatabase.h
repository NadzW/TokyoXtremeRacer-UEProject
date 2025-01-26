#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAbilityTag.h"
#include "SAbilityDatabase.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSAbilityDatabase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAbilityTag> AbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> AbilityBehaviorClass;
    
    FSAbilityDatabase();
};

