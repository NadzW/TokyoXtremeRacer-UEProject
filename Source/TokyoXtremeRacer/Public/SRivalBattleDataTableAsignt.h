#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERivalBattleBaseParameterTbl.h"
#include "SRivalBattleDataTableAsignt.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalBattleDataTableAsignt : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalBattleBaseParameterTbl Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* data_table;
    
    FSRivalBattleDataTableAsignt();
};

