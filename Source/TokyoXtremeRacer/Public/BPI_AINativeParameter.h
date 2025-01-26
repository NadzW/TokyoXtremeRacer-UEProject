#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAbilityAIType.h"
#include "EOvertakeMethod.h"
#include "BPI_AINativeParameter.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_AINativeParameter : public UInterface {
    GENERATED_BODY()
};

class IBPI_AINativeParameter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseNitroStraightCm(const float NewUseNitroStraightCm);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUseNitroCornerR(const float NewUseNitroCornerR);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUpperDriftCornerR(const float NewUpperDriftCornerR);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUnderDriftCornerR(const float NewUnderDriftCornerR);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOvertakeMethod(const EOvertakeMethod NewOvertakeMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNotUseNitroStraightCm(const float NewNotUseNitroStraightCm);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNotUseNitroCornerR(const float NewNotUseNitroCornerR);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNitroRate(const float NewNitroRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsEnableNitro(const bool NewbIsEnableNitro);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsEnableDrift(const bool NewbIsEnableDrift);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDrivingLineScalar(const float NewDrivingLineScalar);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDriftThrougholdCornerR(const float NewDriftThrougholdCornerR);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDriftOverSpeedKmh(const float NewDriftOverSpeedKmh);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetbIsOvertakeWithNitro(const bool NewbIsOvertakeWithNitro);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAbilityAIType(const EAbilityAIType NewAbilityAIType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetUseNitroStraightCm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetUseNitroCornerR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetUpperDriftCornerR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetUnderDriftCornerR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EOvertakeMethod GetOvertakeMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNotUseNitroStraightCm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNotUseNitroCornerR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNitroRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsEnableNitro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsEnableDrift() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDrivingLineScalar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDriftThrougholdCornerR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDriftOverSpeedKmh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetbIsOvertakeWithNitro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EAbilityAIType GetAbilityAIType() const;
    
};

