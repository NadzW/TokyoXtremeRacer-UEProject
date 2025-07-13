#pragma once
#include "CoreMinimal.h"
#include "ERecollectionConversationPAType.generated.h"

UENUM(BlueprintType)
enum class ERecollectionConversationPAType : uint8 {
    None,
    PreBattle_FirstBattle,
    PreBattle_NotWin,
    PreBattle_Won,
    PA_Battle_SelectBattle,
    PA_Battle_SelectCancel,
    PA_Battle_RefuseBattle,
    PostBattle_FirstWin,
    PostBattle_WinManyTimes,
    PostBattle_Defeated,
    PostBattle_DefeatAfterWinning,
    PostBattle_Draw,
};

