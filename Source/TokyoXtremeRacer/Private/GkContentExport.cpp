#include "GkContentExport.h"

UGkContentExport::UGkContentExport() {
}

bool UGkContentExport::TriggerHighResScreenshotAndExport(int32 Width, int32 Height, const FGkImageExportConfig& Config, const FGkImageExportExecConfig& ExecConfig) {
    return false;
}

bool UGkContentExport::IsHDREnabled() {
    return false;
}

int32 UGkContentExport::GetOngoingExportCount() {
    return 0;
}

void UGkContentExport::ExportSdrTextureContent(UTexture* Texture, const FGkImageExportConfig& Config, const FGkImageExportExecConfig& ExecConfig) {
}

void UGkContentExport::ExportSdrImageContent(const FGkSdrImageExportParams& Params, const FGkImageExportConfig& Config, const FGkImageExportExecConfig& ExecConfig) {
}

void UGkContentExport::ExportHdrTextureContent(UTexture* Texture, int32 DisplayOutputFormat, const FGkImageExportConfig& Config, const FGkImageExportExecConfig& ExecConfig) {
}


