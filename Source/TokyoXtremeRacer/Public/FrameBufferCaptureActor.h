#pragma once
#include "CoreMinimal.h"
#include "FrameBufferCaptureActor.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API AFrameBufferCaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTextureTarget;
    
    AFrameBufferCaptureActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCapture();
    
    UFUNCTION(BlueprintCallable)
    void StartCapture();
    
};

