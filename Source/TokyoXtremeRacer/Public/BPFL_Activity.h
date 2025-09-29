#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStoryKind.h"
#include "EStoryStage.h"
#include "SObjectiveInfo.h"
#include "BPFL_Activity.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_Activity : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_Activity();

    UFUNCTION(BlueprintCallable)
    static void StartActivity(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    static void ReStartActiveActivities(const EStoryStage& start_stage, const EStoryKind& story_kind);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllActiveActivities();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetObjectiveListForActivity(const TMap<FName, FSObjectiveInfo> objective_map, const TArray<FName>& clear_objective_id);
    
    UFUNCTION(BlueprintCallable)
    static void EndActivity(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    static void CheckUpdateActivity(const UDataTable* activity_data_table, const TArray<FName>& check_objective_id);
    
    UFUNCTION(BlueprintCallable)
    static void CheckChangeActivityAll(const TMap<FName, FSObjectiveInfo> objective_map, const TArray<FName>& clear_objective_id, const UDataTable* activity_data_table, const EStoryKind& story_kind);
    
};

