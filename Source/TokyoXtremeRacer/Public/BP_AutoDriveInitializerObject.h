#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_AutoDriveInitializerObject.h"
#include "Templates/SubclassOf.h"
#include "BP_AutoDriveInitializerObject.generated.h"

class AAIController;
class APawn;
class UBP_AutoDriveInitializerObject;
class UBlackboardComponent;

UCLASS(Blueprintable)
class UBP_AutoDriveInitializerObject : public UObject, public IBPI_AutoDriveInitializerObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UBP_AutoDriveInitializerObject>> PrerequisiteInitializers;
    
public:
    UBP_AutoDriveInitializerObject();

protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ResolvePrerequisiteInitialize(UObject* WorldContextObject, APawn* ControlledPawn, AAIController* OwnerController, UBlackboardComponent* Blackboard);
    

    // Fix for true pure virtual functions not being implemented
};

