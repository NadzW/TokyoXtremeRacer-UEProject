#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ADPDebugSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UADPDebugSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> TempAIParameterObjects;
    
public:
    UADPDebugSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveTempAIParameterObject(const FName& ParameterName);
    
    UFUNCTION(BlueprintCallable)
    UObject* FindTempAIParameterObject(const FName& ParameterName);
    
    UFUNCTION(BlueprintCallable)
    void AddTempAIParameterObject(const FName& ParameterName, UObject* ParameterObject);
    
};

