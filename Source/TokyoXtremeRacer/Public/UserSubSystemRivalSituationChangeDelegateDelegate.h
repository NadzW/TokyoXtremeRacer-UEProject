#pragma once
#include "CoreMinimal.h"
#include "ERivalSituation.h"
#include "UserSubSystemRivalSituationChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserSubSystemRivalSituationChangeDelegate, FName, rival_id, ERivalSituation, new_situation);

