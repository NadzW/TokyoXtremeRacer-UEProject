#include "CustomCommonActionWidget.h"

UCustomCommonActionWidget::UCustomCommonActionWidget() {
    this->EnhancedInputAction = NULL;
    this->ProgressDynamicMaterial = NULL;
}

void UCustomCommonActionWidget::SetInputActions(TArray<FDataTableRowHandle> NewInputActions) {
}

void UCustomCommonActionWidget::SetInputAction(FDataTableRowHandle InputActionRow) {
}

void UCustomCommonActionWidget::SetIconRimBrush(FSlateBrush InIconRimBrush) {
}

void UCustomCommonActionWidget::SetEnhancedInputAction(UInputAction* InInputAction) {
}

bool UCustomCommonActionWidget::IsHeldAction() const {
    return false;
}

FSlateBrush UCustomCommonActionWidget::GetIcon() const {
    return FSlateBrush{};
}

FText UCustomCommonActionWidget::GetDisplayText() const {
    return FText::GetEmpty();
}


