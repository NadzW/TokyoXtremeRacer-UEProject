#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BadNameState.h"
#include "BadNameUnit.h"
#include "EOP_Language.h"
#include "BPFL_BadNameUtility.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_BadNameUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_BadNameUtility();

    UFUNCTION(BlueprintCallable)
    static FBadNameState OverwriteBadName(const FBadNameState& base, const FBadNameState& Add);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSameBadName(const FBadNameState& base, const FBadNameState& check);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameState GetRandomDefaultBadName(int32 Area, UDataTable* AlphaTable, UDataTable* BetaTable);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameUnit GetDefaultBetaBadName(UDataTable* BetaTable);
    
    UFUNCTION(BlueprintCallable)
    static FBadNameUnit GetDefaultAlphaBadName(int32 Area, UDataTable* AlphaTable);
    
    UFUNCTION(BlueprintCallable)
    static FText GetBadNameText(const FBadNameState& bad_name, const EOP_Language& Option_Language);
    
private:
    UFUNCTION(BlueprintCallable)
    static FBadNameState CreateSimpleBadName(const FText& Name);
    
public:
    UFUNCTION(BlueprintCallable)
    static FBadNameState CombineBadName(const FBadNameState& base, const FBadNameState& Add);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBadName(const FBadNameState& base, const FBadNameState& Add, FBadNameState& new_bad_name);
    
};

