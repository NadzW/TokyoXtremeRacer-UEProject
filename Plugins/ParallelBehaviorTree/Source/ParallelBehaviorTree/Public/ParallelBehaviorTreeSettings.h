#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EParallelBehaviorTreeRunThreadType.h"
#include "ParallelBehaviorTreeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class PARALLELBEHAVIORTREE_API UParallelBehaviorTreeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParallelBehaviorTreeRunThreadType RunThreadType;
    
    UParallelBehaviorTreeSettings();

};

