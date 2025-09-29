#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineRankingBoardEntry.generated.h"

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UOnlineRankingBoardEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberScore;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 HandleSteamUGC;
    
    UOnlineRankingBoardEntry();

};

