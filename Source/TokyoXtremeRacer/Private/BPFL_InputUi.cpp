#include "BPFL_InputUi.h"

UBPFL_InputUi::UBPFL_InputUi() {
}

void UBPFL_InputUi::SlateAppSetPlatformCursorVisibility(bool bNewVisibility) {
}

void UBPFL_InputUi::SlateAppSetCursorPos(const FVector2D& AbsoluteMouseCoordinate) {
}

void UBPFL_InputUi::SlateAppCallOnCursorSet() {
}

void UBPFL_InputUi::SetShowMouseCursor(APlayerController* PlayerController, bool bShow) {
}

void UBPFL_InputUi::SetCurrentInputMethod(UCommonInputSubsystem* CommonInputSubsystem, ECommonInputType CommonInputType, FControllerModel ControllerModel) {
}

FText UBPFL_InputUi::FormatInputDescription(UControllerLayoutDatabase* ControllerLayoutDatabase, FText Format, bool bAllowKeyboard, TArray<UInputMappingContext*> InputMappingContexts) {
    return FText::GetEmpty();
}

void UBPFL_InputUi::FlushCachedCursorPos(APlayerController* PlayerController) {
}

void UBPFL_InputUi::DeactivateControllers(UCommonInputSubsystem* CommonInputSubsystem) {
}

void UBPFL_InputUi::ActivateController(UCommonInputSubsystem* CommonInputSubsystem, FControllerId ControllerId) {
}


