#include "GkOnlinePlatformSubsystem.h"

UGkOnlinePlatformSubsystem::UGkOnlinePlatformSubsystem() {
    this->GKOPSUserStatsComponent = NULL;
    this->GKOPSRankingBoardComponent = NULL;
    this->GKOPSOwnershipComponent = NULL;
    this->GkOPSDLCSystemComponent = NULL;
    this->CurrentOnlinePlatform = EDLCPlatform::EDLCP_None;
}

void UGkOnlinePlatformSubsystem::InitializePlatformSystem() {
}


