#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VehicleDataLoggerAdapter.generated.h"

class UVehicleDataLoggerAdapter;

UCLASS(Blueprintable)
class VEHICLEDATALOGGERWRAPPER_API UVehicleDataLoggerAdapter : public UObject {
    GENERATED_BODY()
public:
    UVehicleDataLoggerAdapter();

    UFUNCTION(BlueprintCallable)
    void WriteLogFromList();
    
    UFUNCTION(BlueprintCallable)
    void WriteLog(const TArray<FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    void Open(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static UVehicleDataLoggerAdapter* CreateVehicleDataLoggerAdapter();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearList();
    
    UFUNCTION(BlueprintCallable)
    void AddListString(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddListInt(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddListFloat(const float Value);
    
};

