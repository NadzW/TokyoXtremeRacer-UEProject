#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TimerHandle.h"
#include "SSBVersion.h"
#include "BPFL_Utility.generated.h"

class AActor;
class APlayerController;
class UCompositeDataTable;
class UDataTable;
class UObject;
class UPrimaryAssetLabel;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_Utility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_Utility();

    UFUNCTION(BlueprintCallable)
    static TArray<FText> TextFormatNumberingListName(TArray<FText> format_list);
    
    UFUNCTION(BlueprintCallable)
    static FText TextFormatCarName(FText Format, UCompositeDataTable* car_data);
    
private:
    UFUNCTION(BlueprintCallable)
    static int64 StringToInt64(const FString& src_string);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> Sort(const TArray<float>& Values, const bool is_descending);
    
    UFUNCTION(BlueprintCallable)
    static void SetNetDriverName(AActor* in_actor, const FName in_name);
    
    UFUNCTION(BlueprintCallable)
    static void SetDemoNetDriverName(AActor* in_actor);
    
public:
    UFUNCTION(BlueprintCallable)
    static void ResumeCompileBundledPSOs();
    
private:
    UFUNCTION(BlueprintCallable)
    static bool ProjectWorldToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeDirectory(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_Name(const FName& Source);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuildConfiguration();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSaveDataLowVersion(const FSSBVersion in_save_data_version, const FSSBVersion in_current_version);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayPIE(const UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    static FString GetTimeString(const float& InTime, const bool is_display_all, const bool is_up_to_seconds);
    
public:
    UFUNCTION(BlueprintCallable)
    static void GetSynthBenchmarkIndex(float& CPUIndex, float& GPUIndex, float WorkScale);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetRemainTimeFromTimerHandle(const UObject* WorldContextObject, const FTimerHandle TimerHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumPrecompilesRemainingBundledPSOs();
    
private:
    UFUNCTION(BlueprintCallable)
    static FBoxSphereBounds GetImportedBounds(const USkeletalMesh* SkeletalMesh);
    
public:
    UFUNCTION(BlueprintCallable)
    static FString GetGPUAdapterName();
    
private:
    UFUNCTION(BlueprintCallable)
    static int32 GetExplicitObjectLengthFromPrimaryAssetLabel(UPrimaryAssetLabel* Label);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetExplicitObjectFromPrimaryAssetLabel(UPrimaryAssetLabel* Label, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetApproxSize(const UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAllFilesInDirectory(const FString& Directory, const bool fullPath, const bool withoutExtention, const FString& onlyFilesStartingWith, const FString& onlyFilesWithExtension);
    
public:
    UFUNCTION(BlueprintCallable)
    static void CompositeDataTableRemoveTables(UCompositeDataTable* in_root, UDataTable* in_remove_dt);
    
    UFUNCTION(BlueprintCallable)
    static void CompositeDataTableEmpty(UCompositeDataTable* in_root);
    
    UFUNCTION(BlueprintCallable)
    static void CompositeDataTableAppendTables(UCompositeDataTable* in_root, const TArray<UDataTable*> in_append_dts);
    
    UFUNCTION(BlueprintCallable)
    static void CompositeDataTableAddTables(UCompositeDataTable* in_root, UDataTable* in_add_dt);
    
private:
    UFUNCTION(BlueprintCallable)
    static FString AsDateTimeText_4d2d2d2d2d2d(const FDateTime& InDateTime);
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<UCompositeDataTable*> AppendCompositeDataTableFromSplitControlDT2(UDataTable* in_split_control_dt, const TArray<int32> in_group_ids);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UCompositeDataTable*> AppendCompositeDataTableFromSplitControlDT(UDataTable* in_split_control_dt, const int32 in_group_id);
    
};

