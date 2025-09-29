#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InternalMethodBuildCarDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInternalMethodBuildCarDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathBase;
    
    UInternalMethodBuildCarDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

