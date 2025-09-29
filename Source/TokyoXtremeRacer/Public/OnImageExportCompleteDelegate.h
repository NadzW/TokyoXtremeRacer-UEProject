#pragma once
#include "CoreMinimal.h"
#include "OnImageExportCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImageExportComplete, bool, bSuccess);

