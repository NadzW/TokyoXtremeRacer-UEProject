#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "VehicleDataListLoggerInterface.generated.h"

UINTERFACE(Blueprintable)
class UVehicleDataListLoggerInterface : public UInterface {
    GENERATED_BODY()
};

class IVehicleDataListLoggerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WriteLog();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetListVector(const FString& Key, const FVector& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetListString(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetListInt(const FString& Key, const int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetListFloat(const FString& Key, const float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
};

