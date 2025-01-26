#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAbilityAIType.h"
#include "EOvertakeMethod.h"
#include "BPI_AutoDriveDriverParameter.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_AutoDriveDriverParameter : public UInterface {
    GENERATED_BODY()
};

class IBPI_AutoDriveDriverParameter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 UseNitroCornerRIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseNitroStraightCmIndex(const int32 NewUseNitroStraightCmIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseNitroCornerRIndex(const int32 NewUseNitroCornerRIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSimpleNitroParameter(const int32 NitroParameterIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSimpleDriftParameter(const int32 DriftParameterIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOvertakeMethod(const EOvertakeMethod NewOvertakeMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNitroIndex(const int32 NewNitroIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsOvertakeWithNitro(const bool NewOvertakeWithNitro);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsEnableNitro(const bool NewIsEnableNitro);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsEnableDrift(const bool NewIsEnableDrift);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDrivingLineScalarIndex(const int32 NewDrivingLineScalarIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDriftOverSpeedKmhIndex(const int32 NewDriftOverSpeedKmhIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDriftIndex(const int32 NewDriftIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDriftCornerRIndex(const int32 NewDriftCornerRIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAbilityAIType(const EAbilityAIType NewAbilityAIType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetUseNitroStraightCmIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EOvertakeMethod GetOvertakeMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNitroIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsOvertakeWithNitro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsEnableNitro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsEnableDrift() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDrivingLineScalarIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDriftOverSpeedKmhIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDriftIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDriftCornerRIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EAbilityAIType GetAbilityAIType() const;
    
};

