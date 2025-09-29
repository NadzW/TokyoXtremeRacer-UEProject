#pragma once
#include "CoreMinimal.h"
#include "CommonInput/Public/CommonInputTypeEnum.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ControllerId.h"
#include "ControllerModel.h"
#include "BPFL_InputUi.generated.h"

class APlayerController;
class UCommonInputSubsystem;
class UControllerLayoutDatabase;
class UInputMappingContext;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_InputUi : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_InputUi();

    UFUNCTION(BlueprintCallable)
    static void SlateAppSetPlatformCursorVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    static void SlateAppSetCursorPos(const FVector2D& AbsoluteMouseCoordinate);
    
    UFUNCTION(BlueprintCallable)
    static void SlateAppCallOnCursorSet();
    
    UFUNCTION(BlueprintCallable)
    static void SetShowMouseCursor(APlayerController* PlayerController, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentInputMethod(UCommonInputSubsystem* CommonInputSubsystem, ECommonInputType CommonInputType, FControllerModel ControllerModel);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatInputDescription(UControllerLayoutDatabase* ControllerLayoutDatabase, FText Format, bool bAllowKeyboard, TArray<UInputMappingContext*> InputMappingContexts);
    
    UFUNCTION(BlueprintCallable)
    static void FlushCachedCursorPos(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateControllers(UCommonInputSubsystem* CommonInputSubsystem);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateController(UCommonInputSubsystem* CommonInputSubsystem, FControllerId ControllerId);
    
};

