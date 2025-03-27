#include "GameInfoGameInstanceSubsystem.h"

UGameInfoGameInstanceSubsystem::UGameInfoGameInstanceSubsystem() {
    this->Version = EVersion::EarlyAccess;
    this->LicensePlateGenerator = NULL;
    this->UseLogoLicensePlate = false;
    this->bForcedVibrationStop = false;
}

void UGameInfoGameInstanceSubsystem::SetForcedVibrationStop(const bool in_is_forced_stop) {
}

EVersion UGameInfoGameInstanceSubsystem::GetVersion(FName& out_number) {
    return EVersion::EarlyAccess;
}

FSSBVersion UGameInfoGameInstanceSubsystem::GetSBVersion() {
    return FSSBVersion{};
}

int32 UGameInfoGameInstanceSubsystem::GetSBRevision() {
    return 0;
}

bool UGameInfoGameInstanceSubsystem::GetForcedVibrationStop() const {
    return false;
}


