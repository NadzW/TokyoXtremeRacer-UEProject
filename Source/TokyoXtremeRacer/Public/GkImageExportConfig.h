#pragma once
#include "CoreMinimal.h"
#include "GkImageExportConfig.generated.h"

USTRUCT(BlueprintType)
struct FGkImageExportConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputToFileSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileSystemOutputPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExportOriginal;
    
    TOKYOXTREMERACER_API FGkImageExportConfig();
};

