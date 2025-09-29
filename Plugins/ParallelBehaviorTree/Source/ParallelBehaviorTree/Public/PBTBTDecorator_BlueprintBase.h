#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#include "PBTBTDecorator_BlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PARALLELBEHAVIORTREE_API UPBTBTDecorator_BlueprintBase : public UBTDecorator_BlueprintBase {
    GENERATED_BODY()
public:
    UPBTBTDecorator_BlueprintBase();

};

