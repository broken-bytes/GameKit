#pragma once

#include "Math/Vector3.hxx"
#include "Math/Vector4.hxx"
#include "RenderLayer.hxx"

namespace Rendering {

    class RenderBackend {
        
        RenderBackend(void* window, uint16_t resolutionX, uint16_t resolutionY);
        virtual auto Draw(Rendering::RenderLayer layer, uint8_t viewPort, uint64_t materialId, uint64_t meshId, Math::Vector3 position, Math::Vector4 rotation, Math::Vector3 scale) -> void = 0;
    };
}