#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ObjectLoadAsyncActionBase.generated.h"

class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UObjectLoadAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
public:
    UObjectLoadAsyncActionBase();

};

