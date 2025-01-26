#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "MySpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UMySpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReturnInterpTime;
    
    UMySpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

