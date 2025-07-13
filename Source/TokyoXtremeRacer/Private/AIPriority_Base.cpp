#include "AIPriority_Base.h"

UAIPriority_Base::UAIPriority_Base() {
    this->bIsReverse = false;
}

bool UAIPriority_Base::SortPredicate_Implementation(float Left, float Right) {
    return false;
}

TArray<float> UAIPriority_Base::Sort(TArray<float> LaneRates) {
    return TArray<float>();
}


