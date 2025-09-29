#pragma once
#include "CoreMinimal.h"
#include "Components/StateTreeComponent.h"
#include "BPI_SbBrainComponent.h"
#include "ITSBStateTreeComponent.generated.h"

class UStateTree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ITSBSTATETREE_API UITSBStateTreeComponent : public UStateTreeComponent, public IBPI_SbBrainComponent {
    GENERATED_BODY()
public:
    UITSBStateTreeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStateTreeSchema(UStateTree* NewStateTree);
    

    // Fix for true pure virtual functions not being implemented
};

