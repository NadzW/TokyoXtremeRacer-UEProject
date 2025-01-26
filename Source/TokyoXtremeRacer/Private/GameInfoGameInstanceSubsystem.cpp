#include "GameInfoGameInstanceSubsystem.h"

UGameInfoGameInstanceSubsystem::UGameInfoGameInstanceSubsystem() {
    this->Version = EVersion::EarlyAccess;
    this->LicensePlateGenerator = NULL;
}

EVersion UGameInfoGameInstanceSubsystem::GetVersion(FName& out_number) {
    return EVersion::EarlyAccess;
}

FSSBVersion UGameInfoGameInstanceSubsystem::GetSBVersion() {
    return FSSBVersion{};
}


