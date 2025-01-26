#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_RPDConnectionObject.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_RPDConnectionObject : public UInterface {
    GENERATED_BODY()
};

class IBPI_RPDConnectionObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetElemObject(const int32 ConnectionKey, const int32 ConnectionIndex, UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReserveConnectionSize(const int32 ConnectionKey, const int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveObject(const int32 ConnectionKey, const int32 RemoveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAnyContainedInConnectionKey(const int32 ConnectionKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetConnection(TArray<UObject*>& Connection, const int32 ConnectionKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearAllConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddBranchConnection(const int32 SourceConnectionKey, const int32 NewConnectionKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddBackObject(const int32 ConnectionKey, UObject* Object);
    
};

