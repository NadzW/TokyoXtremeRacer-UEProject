#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GkImageExportConfig.h"
#include "GkImageExportExecConfig.h"
#include "GkSdrImageExportParams.h"
#include "GkContentExport.generated.h"

class UTexture;

UCLASS(Blueprintable)
class UGkContentExport : public UObject {
    GENERATED_BODY()
public:
    UGkContentExport();

    UFUNCTION(BlueprintCallable)
    static bool TriggerHighResScreenshotAndExport(int32 Width, int32 Height, const FGkImageExportConfig& Config, const FGkImageExportExecConfig& ExecConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHDREnabled();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOngoingExportCount();
    
    UFUNCTION(BlueprintCallable)
    static void ExportSdrTextureContent(UTexture* Texture, const FGkImageExportConfig& Config, const FGkImageExportExecConfig& ExecConfig);
    
    UFUNCTION(BlueprintCallable)
    static void ExportSdrImageContent(const FGkSdrImageExportParams& Params, const FGkImageExportConfig& Config, const FGkImageExportExecConfig& ExecConfig);
    
    UFUNCTION(BlueprintCallable)
    static void ExportHdrTextureContent(UTexture* Texture, int32 DisplayOutputFormat, const FGkImageExportConfig& Config, const FGkImageExportExecConfig& ExecConfig);
    
};

