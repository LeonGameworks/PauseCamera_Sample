#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PauseCameraFunctionLibrary.generated.h"

UCLASS()
class PAUSECAMERA_SAMPLE_API UPauseCameraFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetCameraMovableWhenPaused(const UObject* WorldContextObject, bool bIsMovable);
};
