#pragma once
#include "CoreMinimal.h"
#include "OnFileLoadCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFileLoadComplete, const TArray<uint8>&, BinaryData);

