#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/NoExportTypes.h"
#include "CompletedPlayLocationCarSESoundDelegate.h"
#include "ECarSEType.h"
#include "PlayCarLocationSESoundAsyncActionBase.generated.h"

class UObject;
class UPlayCarLocationSESoundAsyncActionBase;
class USoundWorldSubsystem;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UPlayCarLocationSESoundAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedPlayLocationCarSESound Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWorldSubsystem* sound_subsystem_;
    
public:
    UPlayCarLocationSESoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlayCarLocationSESoundAsyncActionBase* PlayCarLocationSE(UObject* WorldContextObject, ECarSEType se_type, FVector Location, float volume_rate);
    
};

