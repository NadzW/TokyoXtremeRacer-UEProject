#pragma once
#include "CoreMinimal.h"
#include "ERankingRequestType.h"
#include "SRankingResult.h"
#include "RankingResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRankingResult, ERankingRequestType, RequestType, const TArray<FSRankingResult>&, ResultValue);

