#include "LicensePlateGenerator.h"

ULicensePlateGenerator::ULicensePlateGenerator() {
}

FSCarLicensePlate ULicensePlateGenerator::GetNumberByLottery(const int32 in_category, const ECourseSimpleArea in_area, const FName in_number_type, const int32 in_business_use_percent) {
    return FSCarLicensePlate{};
}

void ULicensePlateGenerator::AddNumberLotteryRootInfo(const UDataTable* in_data_table) {
}

void ULicensePlateGenerator::AddAreaRootLotteryInfo(const ECourseSimpleArea in_area, const UDataTable* in_data_table) {
}


