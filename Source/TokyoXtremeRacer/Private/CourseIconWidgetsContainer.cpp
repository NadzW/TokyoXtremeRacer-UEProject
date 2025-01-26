#include "CourseIconWidgetsContainer.h"

UCourseIconWidgetsContainer::UCourseIconWidgetsContainer() {
}

void UCourseIconWidgetsContainer::UpdateTransform(const ERunArea RunArea, const FName& MapIconID, FTransform& NewWorldTransform) {
}

TMap<FName, FCourseIconWidgetData> UCourseIconWidgetsContainer::GetIconListsByRunArea(const ERunArea RunArea) {
    return TMap<FName, FCourseIconWidgetData>();
}

TMap<FName, FCourseIconWidgetData> UCourseIconWidgetsContainer::GetAllIconLists() {
    return TMap<FName, FCourseIconWidgetData>();
}

void UCourseIconWidgetsContainer::ClearIconListsInRunArea(const ERunArea RunArea) {
}

void UCourseIconWidgetsContainer::ClearAllIconLists() {
}

void UCourseIconWidgetsContainer::AddIconList(UUserWidget* IconWidget, FName MapIconID, const TArray<FName>& Tags, FTransform WorldTransform, const ERunArea RunArea, const ECourseMapFilterIconType FilterIconType) {
}


