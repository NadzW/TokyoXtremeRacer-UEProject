#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RankingResultDelegate.h"
#include "RankingGameInstanceSubsystem.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API URankingGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingResult OnFailure;
    
public:
    URankingGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestGetRankingPlayer(APlayerController* InPlayerController, FName InStatName);
    
    UFUNCTION(BlueprintCallable)
    void RequestGetRankingAroundRank(APlayerController* PlayerController, FName InStatName, int32 InRank, int32 InRange);
    
    UFUNCTION(BlueprintCallable)
    void RequestGetRankingAroundPlayer(APlayerController* PlayerController, FName InStatName, int32 InRange);
    
};

