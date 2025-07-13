#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CoursePathDebugPosition.h"
#include "CoursePathDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UCoursePathDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePathDebugPosition base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePathDebugPosition Other1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePathDebugPosition Other2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePathDebugPosition Other3;
    
    UCoursePathDebugComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateOther3(const FName& RPD, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOther2(const FName& RPD, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOther1(const FName& RPD, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBase(const FName& RPD, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    void LogDebug(float LastDiff, float CurrentDiff, float Threshold);
    
};

