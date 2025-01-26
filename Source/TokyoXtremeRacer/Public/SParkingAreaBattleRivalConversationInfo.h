#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SRivalConversationInfo.h"
#include "SParkingAreaBattleRivalConversationInfo.generated.h"

USTRUCT(BlueprintType)
struct FSParkingAreaBattleRivalConversationInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleBeforePlayerNotBattleConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleBeforePlayerNotWinConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleBeforePlayerWinConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleAfterPlayerBeginWinConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleAfterPlayerWinConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleAfterPlayerLoseConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleAfterPlayerWinAfterLoseConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleBeforePlayerYesConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleBeforePlayerNoThanksConvInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleBeforePlayerNotMeetConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalConversationInfo BattleAfterPlayerDrawConvInfo;
    
    TOKYOXTREMERACER_API FSParkingAreaBattleRivalConversationInfo();
};

