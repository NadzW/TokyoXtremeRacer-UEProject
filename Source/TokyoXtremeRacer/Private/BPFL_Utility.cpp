#include "BPFL_Utility.h"

UBPFL_Utility::UBPFL_Utility() {
}

FText UBPFL_Utility::VectorToTextDataTableRowFormat(const FVector& Value) {
    return FText::GetEmpty();
}

void UBPFL_Utility::ToggleBoolean(bool& RefValue) {
}

TArray<FText> UBPFL_Utility::TextFormatNumberingListName(TArray<FText> format_list) {
    return TArray<FText>();
}

FText UBPFL_Utility::TextFormatCarName(FText Format, UCompositeDataTable* car_data) {
    return FText::GetEmpty();
}

int64 UBPFL_Utility::StringToInt64(const FString& src_string) {
    return 0;
}

TArray<int32> UBPFL_Utility::Sort(const TArray<float>& Values, const bool is_descending) {
    return TArray<int32>();
}

void UBPFL_Utility::SetNetDriverName(AActor* in_actor, const FName in_name) {
}

void UBPFL_Utility::SetDemoNetDriverName(AActor* in_actor) {
}

void UBPFL_Utility::ResumeCompileBundledPSOs() {
}

bool UBPFL_Utility::ProjectWorldToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative) {
    return false;
}

bool UBPFL_Utility::MakeDirectory(const FString& Path) {
    return false;
}

bool UBPFL_Utility::IsValid_Name(const FName& Source) {
    return false;
}

bool UBPFL_Utility::IsShippingBuildConfiguration() {
    return false;
}

bool UBPFL_Utility::IsSaveDataLowVersion(const FSSBVersion in_save_data_version, const FSSBVersion in_current_version) {
    return false;
}

bool UBPFL_Utility::IsPlayPIE(const UObject* WorldContextObject) {
    return false;
}

FString UBPFL_Utility::GetTimeString(const float& InTime, const bool is_display_all, const bool is_up_to_seconds) {
    return TEXT("");
}

void UBPFL_Utility::GetSynthBenchmarkIndex(float& CPUIndex, float& GPUIndex, float WorkScale) {
}

float UBPFL_Utility::GetRemainTimeFromTimerHandle(const UObject* WorldContextObject, const FTimerHandle TimerHandle) {
    return 0.0f;
}

int32 UBPFL_Utility::GetNumPrecompilesRemainingBundledPSOs() {
    return 0;
}

FBoxSphereBounds UBPFL_Utility::GetImportedBounds(const USkeletalMesh* SkeletalMesh) {
    return FBoxSphereBounds{};
}

FString UBPFL_Utility::GetGPUAdapterName() {
    return TEXT("");
}

int32 UBPFL_Utility::GetExplicitObjectLengthFromPrimaryAssetLabel(UPrimaryAssetLabel* Label) {
    return 0;
}

UObject* UBPFL_Utility::GetExplicitObjectFromPrimaryAssetLabel(UPrimaryAssetLabel* Label, int32 Index) {
    return NULL;
}

FVector UBPFL_Utility::GetApproxSize(const UStaticMesh* StaticMesh) {
    return FVector{};
}

TArray<FString> UBPFL_Utility::GetAllFilesInDirectory(const FString& Directory, const bool fullPath, const bool withoutExtention, const FString& onlyFilesStartingWith, const FString& onlyFilesWithExtension) {
    return TArray<FString>();
}

FText UBPFL_Utility::DoubleToTextWithoutGrouping(const double Value) {
    return FText::GetEmpty();
}

void UBPFL_Utility::CompositeDataTableRemoveTables(UCompositeDataTable* in_root, UDataTable* in_remove_dt) {
}

void UBPFL_Utility::CompositeDataTableEmpty(UCompositeDataTable* in_root) {
}

void UBPFL_Utility::CompositeDataTableAppendTables(UCompositeDataTable* in_root, const TArray<UDataTable*> in_append_dts) {
}

void UBPFL_Utility::CompositeDataTableAddTables(UCompositeDataTable* in_root, UDataTable* in_add_dt) {
}

FString UBPFL_Utility::AsDateTimeText_4d2d2d2d2d2d(const FDateTime& InDateTime) {
    return TEXT("");
}

TArray<UCompositeDataTable*> UBPFL_Utility::AppendCompositeDataTableFromSplitControlDT2(UDataTable* in_split_control_dt, const TArray<int32> in_group_ids) {
    return TArray<UCompositeDataTable*>();
}

TArray<UCompositeDataTable*> UBPFL_Utility::AppendCompositeDataTableFromSplitControlDT(UDataTable* in_split_control_dt, const int32 in_group_id) {
    return TArray<UCompositeDataTable*>();
}


