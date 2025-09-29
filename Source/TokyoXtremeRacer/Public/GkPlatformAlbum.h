#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GkPlatformAlbum.generated.h"

UCLASS(Blueprintable)
class UGkPlatformAlbum : public UObject {
    GENERATED_BODY()
public:
    UGkPlatformAlbum();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FIntVector> GetSupportedImageSizes();
    
    UFUNCTION(BlueprintCallable)
    static void AddImageFileBlocking(const FString& src_file_path);
    
};

