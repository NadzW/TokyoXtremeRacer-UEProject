#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncFileWriteFinishedDelegate.h"
#include "AsyncFileWriteTimedOutDelegate.h"
#include "WaitFileWriteFinishedFunction.generated.h"

class UObject;
class UWaitFileWriteFinishedFunction;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UWaitFileWriteFinishedFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncFileWriteFinished Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncFileWriteTimedOut TimedOut;
    
    UWaitFileWriteFinishedFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitFileWriteFinishedFunction* WaitFileWriteFinishedFunction(UObject* WorldContextObject, const FString& FilePath, float TimeoutInSeconds);
    
};

