#pragma once

#include "Common/PCH.hxx"
#include "Containers/Vector.hxx"
#include "Math/Vector3.hxx"
#include "Math/Vector4.hxx"

namespace Renderer {
    
    enum class RenderLayer: uint8_t {
        DEFAULT,
        LAYER_1,
        LAYER_2,
        LAYER_3,
        LAYER_4,
        LAYER_5,
        LAYER_6,
        LAYER_7,
    };

    SWIFT_EXPORTED(draw(layer:viewPort:material:mesh:position:rotation:scale:))
    void Draw(RenderLayer layer, uint8_t viewPort, uint64_t materialId, uint64_t meshId, Math::Vector3 position, Math::Vector4 rotation, Math::Vector3 scale);
}


void Test();