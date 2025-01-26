#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECarType.h"
#include "Templates/SubclassOf.h"
#include "SCarBlueprintList.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FSCarBlueprintList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarType CarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> CarBlueprint;
    
    TOKYOXTREMERACER_API FSCarBlueprintList();
};

