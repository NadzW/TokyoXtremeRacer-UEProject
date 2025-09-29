#include "BPFL_Activity.h"

UBPFL_Activity::UBPFL_Activity() {
}

void UBPFL_Activity::StartActivity(const FString& ActivityId) {
}

void UBPFL_Activity::ReStartActiveActivities(const EStoryStage& start_stage, const EStoryKind& story_kind) {
}

void UBPFL_Activity::ResetAllActiveActivities() {
}

TArray<FName> UBPFL_Activity::GetObjectiveListForActivity(const TMap<FName, FSObjectiveInfo> objective_map, const TArray<FName>& clear_objective_id) {
    return TArray<FName>();
}

void UBPFL_Activity::EndActivity(const FString& ActivityId) {
}

void UBPFL_Activity::CheckUpdateActivity(const UDataTable* activity_data_table, const TArray<FName>& check_objective_id) {
}

void UBPFL_Activity::CheckChangeActivityAll(const TMap<FName, FSObjectiveInfo> objective_map, const TArray<FName>& clear_objective_id, const UDataTable* activity_data_table, const EStoryKind& story_kind) {
}


