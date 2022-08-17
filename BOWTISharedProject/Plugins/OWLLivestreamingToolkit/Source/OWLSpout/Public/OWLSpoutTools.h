#pragma once

#include "CoreMinimal.h"

namespace FOWLSpoutTools
{
	enum ERHIType
	{
		D3D10,
		D3D11,
		D3D12,
		OpenGL,
		OpenGL3,
		OpenGL4,
		Vulkan,
		Null
	};

	ERHIType StringToRHIType(FString rhiString);
}