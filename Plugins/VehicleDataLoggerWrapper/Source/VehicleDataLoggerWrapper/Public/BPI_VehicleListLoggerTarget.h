#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_VehicleListLoggerTarget.generated.h"

UINTERFACE(Blueprintable)
class UBPI_VehicleListLoggerTarget : public UInterface {
    GENERATED_BODY()
};

class IBPI_VehicleListLoggerTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLog();
    
};

