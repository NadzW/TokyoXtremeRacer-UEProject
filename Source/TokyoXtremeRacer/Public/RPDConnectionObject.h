#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_RPDConnectionObject.h"
#include "SRPDConnectionObjectElem.h"
#include "RPDConnectionObject.generated.h"

UCLASS(Blueprintable, Transient)
class TOKYOXTREMERACER_API URPDConnectionObject : public UObject, public IBPI_RPDConnectionObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FSRPDConnectionObjectElem> Connections;
    
public:
    URPDConnectionObject();


    // Fix for true pure virtual functions not being implemented
};

