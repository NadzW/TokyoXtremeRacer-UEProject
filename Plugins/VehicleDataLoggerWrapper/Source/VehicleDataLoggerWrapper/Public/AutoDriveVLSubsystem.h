#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AutoDriveVLSubsystem.generated.h"

class UVehicleDataListLogger;

UCLASS(Blueprintable)
class VEHICLEDATALOGGERWRAPPER_API UAutoDriveVLSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UVehicleDataListLogger*> Logger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString AutoDriveVLSaveDirectory;
    
public:
    UAutoDriveVLSubsystem();

    UFUNCTION(BlueprintCallable)
    void TerminateVehicleDataListLogger(const FString& AdapterKey);
    
    UFUNCTION(BlueprintCallable)
    UVehicleDataListLogger* GetVehicleDataListLogger(const FString& AdapterKey);
    
    UFUNCTION(BlueprintCallable)
    UVehicleDataListLogger* CreateVehicleDataListLogger(const FString& AdapterKey);
    
};

