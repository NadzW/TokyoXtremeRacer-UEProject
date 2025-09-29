#include "BPFL_GameCoursePathUtility.h"

UBPFL_GameCoursePathUtility::UBPFL_GameCoursePathUtility() {
}

void UBPFL_GameCoursePathUtility::ReturnAcceptableZoneFromECourseOpenArea(TSet<ERPDZoneAttribute>& AcceptZones, const ECourseOpenArea OpenArea) {
}

TArray<int32> UBPFL_GameCoursePathUtility::GetZoneIndicesFromRunArea(const ERunArea Area, const TMap<ERunArea, URoadPointAreaContainer*>& RPADatas) {
    return TArray<int32>();
}

ERunArea UBPFL_GameCoursePathUtility::GetRunAreaFromZone(const TMap<ERunArea, URoadPointAreaContainer*>& RPADatas, ERPDZoneAttribute Zone) {
    return ERunArea::ERA_None;
}


