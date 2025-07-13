#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ECarCutInBunnerType.h"
#include "BPI_CarCutInWidget.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_CarCutInWidget : public UInterface {
    GENERATED_BODY()
};

class IBPI_CarCutInWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRivalName(const FText& RivalName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInOutStatus(const bool IsIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetImageEmblemCutInEffect(const UTexture2D* TextureImageEmblemEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetImageEmblem(const UTexture2D* TextureImageEmblem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCutInBunnerType(const ECarCutInBunnerType CutInBunnerType);
    
};

