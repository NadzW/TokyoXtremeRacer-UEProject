#pragma once
#include "CoreMinimal.h"
#include "OnTwoFilesLoadCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTwoFilesLoadComplete, const TArray<uint8>&, TextureBinaryData, const TArray<uint8>&, ReplayBinaryData);

