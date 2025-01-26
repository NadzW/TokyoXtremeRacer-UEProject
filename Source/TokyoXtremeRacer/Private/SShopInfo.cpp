#include "SShopInfo.h"

FSShopInfo::FSShopInfo() {
    this->ShopEnterExit = ECourseExit::HW_C1_Takarachou_Outer;
    this->CpNeededForFirstTravelToCarShop = 0;
    this->TuneShopLineups = ETuningShopLineups::Power;
    this->CpNeededForFirstTravelToTuneShop = 0;
    this->ParkingArea = EParkingArea::PA_6_9_Hakozaki;
    this->CpNeededForFirstTravelToParkingArea = 0;
    this->DressUpShopLineups = EDressUpShopLineups::AeroParts;
    this->CpNeededForFirstTravelToCustomizeShop = 0;
}

