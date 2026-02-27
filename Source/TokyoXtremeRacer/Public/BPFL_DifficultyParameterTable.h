#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStoryKind.h"
#include "BPFL_DifficultyParameterTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_DifficultyParameterTable : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_DifficultyParameterTable();

private:
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetDifficultyParameterTable(const FName TableRowName, const EStoryKind CurrentStoryKind);
    
};

