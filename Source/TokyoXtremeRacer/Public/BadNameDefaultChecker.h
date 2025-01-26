#pragma once
#include "CoreMinimal.h"
#include "BadNameCheckerBase.h"
#include "BadNameState.h"
#include "BadNameUnit.h"
#include "EOP_Language.h"
#include "BadNameDefaultChecker.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class TOKYOXTREMERACER_API UBadNameDefaultChecker : public UBadNameCheckerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AlphaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BetaDataTable;
    
    UBadNameDefaultChecker();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBadNameUnit GetDefaultBeta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDefaultBadnameText(int32 Area, const EOP_Language& Option_Language) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBadNameState GetDefaultBadname(int32 Area) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBadNameUnit GetDefaultAlpha(int32 Area) const;
    
};

