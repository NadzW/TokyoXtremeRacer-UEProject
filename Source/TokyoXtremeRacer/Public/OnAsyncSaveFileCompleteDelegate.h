#pragma once
#include "CoreMinimal.h"
#include "OnAsyncSaveFileCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAsyncSaveFileComplete, bool, bSuccess);

