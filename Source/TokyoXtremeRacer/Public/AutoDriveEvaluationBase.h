#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_AutoDriveEvaluation.h"
#include "AutoDriveEvaluationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TOKYOXTREMERACER_API UAutoDriveEvaluationBase : public UObject, public IBPI_AutoDriveEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EvaluationCaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EvaluationScore;
    
    UAutoDriveEvaluationBase();


    // Fix for true pure virtual functions not being implemented
};

