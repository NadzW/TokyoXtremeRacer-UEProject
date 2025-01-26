#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOvertakeMethod.h"
#include "BPI_CourseParameter.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_CourseParameter : public UInterface {
    GENERATED_BODY()
};

class IBPI_CourseParameter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetUseNitroStraightCm(const int32 StraightCmIndex, float& NotUseNitroStraightCm, float& UseNitroStraightCm) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetUseNitroCornerRs(const int32 CornerRIndex, float& NotUseNitroCornerR, float& UseNitroCornerR) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetUseDriftCornerRs(const int32 DriftCornerRIndex, float& UnderDriftCornerR, float& UpperDriftCornerR) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EOvertakeMethod GetOvertakeMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNitroRate(const int32 NitroIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsOvertakeWithNitro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDrivingLineScalar(const int32 DrivingLineScalarIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDriftThrougholdCornerR(const int32 DriftIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDriftOverSpeedKmh(const int32 DriftOverSpeedKmhIndex) const;
    
};

