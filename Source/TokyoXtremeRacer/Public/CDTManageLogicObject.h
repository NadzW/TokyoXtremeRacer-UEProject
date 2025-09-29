#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BPI_CDTManageSystem.h"
#include "SManagedCDTList.h"
#include "CDTManageLogicObject.generated.h"

class UCompositeDataTable;
class UDataTable;
class UPrimaryAssetLabel;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCDTManageLogicObject : public UObject, public IBPI_CDTManageSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSManagedCDTList> CDTLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPrimaryAssetLabel* CurrentPALCDTList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UDataTable*> TransientLoadedDataTables;
    
public:
    UCDTManageLogicObject();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool UnregisterAllCDT() override PURE_VIRTUAL(UnregisterAllCDT, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReplaceParentDataTable(FSoftObjectPath TargetCompositeDataTablePath, const FString& BaseDataTablePath, const FString& ReplaceDataTablePath) override PURE_VIRTUAL(RequestReplaceParentDataTable, return false;);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCDTsFromCDTList(UPrimaryAssetLabel* PALCDTList, UDataTable* DTReplaceList) override PURE_VIRTUAL(RegisterCDTsFromCDTList,);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterBaseCompositeDataTable(UCompositeDataTable* BaseCompositeDataTable) override PURE_VIRTUAL(RegisterBaseCompositeDataTable, return false;);
    
    UFUNCTION(BlueprintCallable)
    UCompositeDataTable* GetCompositeDataTableFromPath(TSoftObjectPtr<UCompositeDataTable> CDTPath) override PURE_VIRTUAL(GetCompositeDataTableFromPath, return NULL;);
    
    UFUNCTION()
    UCompositeDataTable* GetCompositeDataTable(FName CDTName) const override PURE_VIRTUAL(GetCompositeDataTable, return NULL;);
    
};

