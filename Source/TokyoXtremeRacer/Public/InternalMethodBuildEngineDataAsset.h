#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InternalMethodBuildEngineDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInternalMethodBuildEngineDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathBase;
    
    UInternalMethodBuildEngineDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

