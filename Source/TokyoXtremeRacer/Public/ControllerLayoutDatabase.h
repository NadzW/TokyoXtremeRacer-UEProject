#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AxisOnDigitalInputMappingInfo.h"
#include "ControllerLayoutKey.h"
#include "ControllerLayoutValue.h"
#include "ControllerModel.h"
#include "EFindResultPins.h"
#include "EInputHatDirection.h"
#include "ControllerLayoutDatabase.generated.h"

class UControllerLayoutData;
class UGenericControllerLayoutData;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UControllerLayoutDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControllerLayoutData* Xbox360;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControllerLayoutData* XBoxOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControllerLayoutData* PS4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControllerLayoutData* PS5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControllerLayoutData* SteamDeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FControllerModel, UControllerLayoutData*> Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericControllerLayoutData* GenericController;
    
public:
    UControllerLayoutDatabase();

    UFUNCTION(BlueprintCallable)
    static FString ToDisplayTextString(const FControllerLayoutValue& ControllerLayoutValue, bool bFullAxisName, EInputHatDirection HatDirection);
    
    UFUNCTION(BlueprintCallable)
    static void GetUnidirectionalAxisOnDigitalInfo(const FControllerLayoutValue& ControllerLayoutValue, TEnumAsByte<EFindResultPins>& FindResult, FAxisOnDigitalInputMappingInfo& AxisOnDigitalInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetGenericControllerLayoutValue(const FControllerLayoutKey& ControllerLayoutKey, FControllerLayoutValue& ControllerLayoutValue, TEnumAsByte<EFindResultPins>& FindResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGenericControllerLayoutData* GetGenericController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetByControllerModel(const FControllerModel& ControllerModel, UControllerLayoutData*& ControllerLayoutData, TEnumAsByte<EFindResultPins>& FindResult) const;
    
};

