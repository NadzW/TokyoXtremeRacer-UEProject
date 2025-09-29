#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LoadSoftObjectAsyncActionBase.generated.h"

class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API ULoadSoftObjectAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
public:
    ULoadSoftObjectAsyncActionBase();

};

