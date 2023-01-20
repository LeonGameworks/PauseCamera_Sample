#include "PauseCameraFunctionLibrary.h"
#include "Engine/World.h"

void UPauseCameraFunctionLibrary::SetCameraMovableWhenPaused(const UObject* WorldContextObject, bool bIsMovable)
{
	if (WorldContextObject)
	{
		WorldContextObject->GetWorld()->bIsCameraMoveableWhenPaused = bIsMovable;
	}
}