#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EOvertakeMethod.h"
#include "AutoDriveCourseParameterData.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UAutoDriveCourseParameterData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> NitroRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> NotUseNitroCornerRs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> UseNitroCornerRs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> NotUseNitroStraightCms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> UseNitroStraightCms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DriftThrougholdCornerRs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOvertakeMethod OvertakeMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> UnderDriftCornerRs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> UpperDriftCornerRs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DriftOverSpeedKmhs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DrivingLineScalars;
    
    UAutoDriveCourseParameterData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateValidNitroParameterSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateValidDriftParameterSize() const;
    
};

