#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SAbilityDatabase.h"
#include "AbilityManagerSubsystem.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UAbilityManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> LoadedAbilityClasses;
    
public:
    UAbilityManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    UClass* LoadAbilityFromDataBaseEntry(const FSAbilityDatabase& AbilityDataBaseEntry, const FName AbilityName);
    
    UFUNCTION(BlueprintCallable)
    UClass* LoadAbilityFromClass(const TSoftClassPtr<UObject> AbilityClass, const FName AbilityName);
    
};

