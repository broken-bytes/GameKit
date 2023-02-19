#pragma once

#include "Common/PCH.hxx"
#include "Containers/Vector.hxx"
#include "RenderLayer.hxx"
#include "Math/Vector3.hxx"
#include "Math/Vector4.hxx"

namespace Renderer {
    SWIFT_EXPORTED(draw(layer:viewPort:material:mesh:position:rotation:scale:))
    void Draw(Rendering::RenderLayer layer, uint8_t viewPort, uint64_t materialId, uint64_t meshId, Math::Vector3 position, Math::Vector4 rotation, Math::Vector3 scale);
}


void Test();