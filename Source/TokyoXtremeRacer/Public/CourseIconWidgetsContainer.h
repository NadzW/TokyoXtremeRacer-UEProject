#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "CourseIconWidgetData.h"
#include "ECourseMapFilterIconType.h"
#include "ERunArea.h"
#include "CourseIconWidgetsContainer.generated.h"

class UCourseIconWidgetsContainerElement;
class UUserWidget;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UCourseIconWidgetsContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERunArea, UCourseIconWidgetsContainerElement*> IconPerRunAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCourseIconWidgetData> AllIconLists;
    
public:
    UCourseIconWidgetsContainer();

    UFUNCTION(BlueprintCallable)
    void UpdateTransform(const ERunArea RunArea, const FName& MapIconID, FTransform& NewWorldTransform);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FCourseIconWidgetData> GetIconListsByRunArea(const ERunArea RunArea);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FCourseIconWidgetData> GetAllIconLists();
    
    UFUNCTION(BlueprintCallable)
    void ClearIconListsInRunArea(const ERunArea RunArea);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllIconLists();
    
    UFUNCTION(BlueprintCallable)
    void AddIconList(UUserWidget* IconWidget, FName MapIconID, const TArray<FName>& Tags, FTransform WorldTransform, const ERunArea RunArea, const ECourseMapFilterIconType FilterIconType);
    
};

