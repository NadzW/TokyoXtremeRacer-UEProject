#pragma once
#include "CoreMinimal.h"
#include "ECourseExit.generated.h"

UENUM(BlueprintType)
enum class ECourseExit : uint8 {
    HW_C1_Takarachou_Outer,
    HW_C1_Ginza_Inner,
    HW_C1_Ginza_Outer,
    HW_C1_Shibakouen_Inner,
    HW_C1_Shibakouen_Outer,
    HW_C1_Iikura_Outer,
    HW_C1_Kasumigaseki_Inner,
    HW_C1_Kasumigaseki_Outer,
    HW_C1_Kitanomaru_Inner,
    HW_C1_Kandabashi_Inner,
    HW_C1_Kandabashi_Outer,
    PA_6_Hakozaki_Outbound_Enter,
    PA_9_Hakozaki_Inbound_Enter,
    PA_11_Shibaura_Inbound_Enter,
    PA_B_Daikoku_Eastbound_Enter,
    PA_B_Daikoku_Westbound_Enter,
    PA_1_Heiwajima_Inbount_Enter,
    PA_1_Heiwajima_Outbount_Enter,
    PA_9_Tatsumi_Enter,
    Num,
    None,
};

