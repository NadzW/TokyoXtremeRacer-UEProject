#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_AutoDriveDriverParameter.h"
#include "BP_AutoDriveDriverParameter.generated.h"

class UBP_AutoDriveDriverParameter;

UCLASS(Blueprintable)
class UBP_AutoDriveDriverParameter : public UObject, public IBPI_AutoDriveDriverParameter {
    GENERATED_BODY()
public:
    UBP_AutoDriveDriverParameter();

    UFUNCTION(BlueprintCallable)
    void Copy(const UBP_AutoDriveDriverParameter* From);
    

    // Fix for true pure virtual functions not being implemented
};

