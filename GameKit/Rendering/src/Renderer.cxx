#include "Renderer.hxx"
#include "DrawCall.hxx"

#include <vector>

namespace Renderer {

    std::vector<Rendering::DrawCall> DrawCalls = {};

    void Draw(RenderLayer layer, uint8_t viewPort, uint64_t materialId, uint64_t meshId, Math::Vector3 position, Math::Vector4 rotation, Math::Vector3 scale) {   
        DrawCalls.emplace_back(layer, viewPort, materialId, meshId, position, rotation, scale);     
    }
}