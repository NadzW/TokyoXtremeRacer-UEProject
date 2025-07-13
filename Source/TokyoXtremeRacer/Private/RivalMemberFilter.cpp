#include "RivalMemberFilter.h"

URivalMemberFilter::URivalMemberFilter() {
}

bool URivalMemberFilter::IsEnableTeam(const FName& team_name, const TMap<ERunArea, bool>& course_flag, const TMap<EParkingArea, bool>& pa_flag) {
    return false;
}

int32 URivalMemberFilter::GetEnableTeamCountByParking(const EParkingArea& Area) {
    return 0;
}

int32 URivalMemberFilter::GetEnableTeamCountByCourse(const ERunArea& Area) {
    return 0;
}

int32 URivalMemberFilter::GetEnableTeamCount(const TMap<ERunArea, bool>& course_flag, const TMap<EParkingArea, bool>& pa_flag) {
    return 0;
}

int32 URivalMemberFilter::GetAllTeamCount() {
    return 0;
}

void URivalMemberFilter::Clear() {
}

void URivalMemberFilter::CheckPACountUp(const EParkingArea& Area, const FName& team_name) {
}

void URivalMemberFilter::CheckDoubleCountUp(const ERunArea& course_area, const EParkingArea& pa_area, const FName& team_name) {
}

void URivalMemberFilter::CheckCourseCountUp(const ERunArea& Area, const FName& team_name) {
}


