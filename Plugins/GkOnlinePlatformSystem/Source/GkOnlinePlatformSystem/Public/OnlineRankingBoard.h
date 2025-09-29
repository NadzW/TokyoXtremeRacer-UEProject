#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineRankingBoard.generated.h"

class UOnlineRankingBoardEntry;

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UOnlineRankingBoard : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOnlineRankingBoardEntry*> RankingBoardEntries;
    
    UOnlineRankingBoard();

};

