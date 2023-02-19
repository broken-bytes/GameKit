#pragma once

#include "Common/Macros.hxx"
#include "RenderBackend.hxx"
#include "RenderLayer.hxx"

#include "Common/PCH.hxx"
#include "Containers/Vector.hxx"
#include "Math/Vector3.hxx"
#include "Math/Vector4.hxx"

namespace Rendering {

    namespace Renderer {

        SWIFT_EXPORTED(init(window:backend:width:height:))
        void Init(Window window, RenderBackendType type, uint32_t width, uint32_t height);
        SWIFT_EXPORTED(draw(layer:viewPort:material:mesh:position:rotation:scale:))
        void Draw(Rendering::RenderLayer layer, uint8_t viewPort, uint64_t materialId, uint64_t meshId, Math::Vector3 position, Math::Vector4 rotation, Math::Vector3 scale);
    }
}
