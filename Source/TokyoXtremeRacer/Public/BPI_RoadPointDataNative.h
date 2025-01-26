#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ERPDInfoAttribute.h"
#include "ERPDZoneAttribute.h"
#include "BPI_RoadPointDataNative.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_RoadPointDataNative : public UInterface {
    GENERATED_BODY()
};

class IBPI_RoadPointDataNative : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnSameAreaLazyRPDNames_C(TArray<FName>& LazyRPDNames);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName ReturnRPDName_C() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ERPDZoneAttribute ReturnFirstPointZone_C() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ERPDInfoAttribute ReturnFirstPointInfoAttribute_C() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnFilterDatasForFindContinuityTargetRoadPoint_C(ERPDZoneAttribute& Zone, ERPDInfoAttribute& Info, int32& RPDIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetRoadWidth_C(float& LeftWidth, float& RightWidth);
    
};

