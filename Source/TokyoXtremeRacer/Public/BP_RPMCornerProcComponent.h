#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPI_RPMCornerProcComponent.h"
#include "BP_RPMCornerProcComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UBP_RPMCornerProcComponent : public UActorComponent, public IBPI_RPMCornerProcComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* RoadPointManager;
    
public:
    UBP_RPMCornerProcComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

