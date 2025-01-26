#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_Math.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_Math : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_Math();

    UFUNCTION(BlueprintPure)
    static double SpeedKmhToMs(const double SpeedKmh);
    
    UFUNCTION(BlueprintPure)
    static double SpeedKmhToCms(const double SpeedKmh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SeparateFloatToDecimalAndFraction(const float InValue, int32& Decimal, float& Fraction);
    
    UFUNCTION(BlueprintPure)
    static void SeparateDoubleToDecimalAndFraction(const double InValue, int32& Decimal, double& Fraction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RateFloat(const float Value, const float Min, const float Max);
    
    UFUNCTION(BlueprintPure)
    static double RateDouble(const double Value, const double Min, const double Max);
    
    UFUNCTION(BlueprintPure)
    static double MtoCm(const double M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Min_VectorVector(const FVector& A, const FVector& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Max_VectorVector(const FVector& A, const FVector& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector LerpVector(const FVector& A, const FVector& B, const float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InInclusiveRange_Vector2D(const FVector2D& Value, const FVector2D& Min, const FVector2D& Max);
    
    UFUNCTION(BlueprintPure)
    static double DevideTest(const double A, const double B);
    
    UFUNCTION(BlueprintCallable)
    static double ComputeCornerRFromArcLengthAndStringLength(const FVector& StartPoint, const FVector& EndPoint, const double CornerLength);
    
    UFUNCTION(BlueprintPure)
    static double CmToM(const double Cm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Clamp(const uint8 Value, const uint8 Min, const uint8 Max);
    
    UFUNCTION(BlueprintPure)
    static double CalculateValueDifferenceInAbsolute(const double A, const double B);
    
};

