#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Components/Widget.h"
#include "CustomCommonActionWidget.generated.h"

class UInputAction;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCustomCommonActionWidget : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputMethodChanged, bool, bUsingGamepad);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputMethodChanged OnInputMethodChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ProgressMaterialBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressMaterialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconRimBrush;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> InputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* EnhancedInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Icon;
    
public:
    UCustomCommonActionWidget();

    UFUNCTION(BlueprintCallable)
    void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);
    
    UFUNCTION(BlueprintCallable)
    void SetInputAction(FDataTableRowHandle InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void SetIconRimBrush(FSlateBrush InIconRimBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetEnhancedInputAction(UInputAction* InInputAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeldAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayText() const;
    
};

