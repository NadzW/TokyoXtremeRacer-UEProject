#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BPI_SbBrainComponent.h"
#include "ParallelThreadBehaviorTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PARALLELBEHAVIORTREE_API UParallelThreadBehaviorTreeComponent : public UBehaviorTreeComponent, public IBPI_SbBrainComponent {
    GENERATED_BODY()
public:
    UParallelThreadBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

