#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ECDTRegisterResult.h"
#include "ECDTReplaceResult.h"
#include "BPI_CDTManageSystem.generated.h"

class UCompositeDataTable;
class UDataTable;
class UPrimaryAssetLabel;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBPI_CDTManageSystem : public UInterface {
    GENERATED_BODY()
};

class IBPI_CDTManageSystem : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool UnregisterAllCDT() PURE_VIRTUAL(UnregisterAllCDT, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual ECDTReplaceResult RequestReplaceParentDataTable(FSoftObjectPath TargetCompositeDataTablePath, const FString& BaseDataTablePath, const FString& ReplaceDataTablePath) PURE_VIRTUAL(RequestReplaceParentDataTable, return ECDTReplaceResult::ECDTRR_Success;);
    
    UFUNCTION(BlueprintCallable)
    virtual ECDTRegisterResult RegisterCDTsFromCDTList(UPrimaryAssetLabel* PALCDTList, UDataTable* DTReplaceList) PURE_VIRTUAL(RegisterCDTsFromCDTList, return ECDTRegisterResult::ECDTRR_Success;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RegisterBaseCompositeDataTable(UCompositeDataTable* BaseCompositeDataTable) PURE_VIRTUAL(RegisterBaseCompositeDataTable, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void RegisterAcceptRootName(const FString& RootName) PURE_VIRTUAL(RegisterAcceptRootName,);
    
    UFUNCTION(BlueprintCallable)
    virtual UCompositeDataTable* GetCompositeDataTableFromPath(TSoftObjectPtr<UCompositeDataTable> CDTPath) PURE_VIRTUAL(GetCompositeDataTableFromPath, return NULL;);
    
    UFUNCTION()
    virtual UCompositeDataTable* GetCompositeDataTable(FName CDTName) const PURE_VIRTUAL(GetCompositeDataTable, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void ForceReleaseCDT() PURE_VIRTUAL(ForceReleaseCDT,);
    
};

