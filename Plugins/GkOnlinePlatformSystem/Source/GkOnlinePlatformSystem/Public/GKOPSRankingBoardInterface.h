#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EGKOPSRankingBoardDataRequestType.h"
#include "EGKOPSRankingBoardScoreMethodType.h"
#include "GKOPSRankingBoardInterface.generated.h"

UINTERFACE(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGKOPSRankingBoardInterface : public UInterface {
    GENERATED_BODY()
};

class GKONLINEPLATFORMSYSTEM_API IGKOPSRankingBoardInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestUploadLeaderboardScore(const FString& APIName, const EGKOPSRankingBoardScoreMethodType MethodType, const int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestGetRankingBoardEntries(const FString& APIName, EGKOPSRankingBoardDataRequestType RequestType, const int32 StartIndex, const int32 EndIndex, const bool bIsRequestRankingBoardName);
    
};

