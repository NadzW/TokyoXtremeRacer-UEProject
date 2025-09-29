#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VehicleDataListLoggerInterface.h"
#include "VehicleDataListLogger.generated.h"

class UVehicleDataLoggerAdapter;

UCLASS(Blueprintable)
class UVehicleDataListLogger : public UObject, public IVehicleDataListLoggerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVehicleDataLoggerAdapter* Adapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ListString;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ListHeaderOrders;
    
    UVehicleDataListLogger();

    UFUNCTION(BlueprintCallable)
    void WriteLogHeader();
    

    // Fix for true pure virtual functions not being implemented
};

