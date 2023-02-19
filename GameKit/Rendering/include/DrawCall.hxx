#pragma once 

#include "Common/PCH.hxx"
#include "Math/Vector3.hxx"
#include "Math/Vector4.hxx"

#ifndef __swift__
namespace Rendering {
#endif
    struct DrawCall {

        enum class DrawCommand {
            CLEAR_COLOR,
            CLEAR_DEPTH
        };

        uint64_t key;
        uint64_t meshId;
        Math::Vector3 position;
        Math::Vector4 rotation;
        Math::Vector3 scale;
        DrawCommand Command;
    };

    auto BuildDrawCall(
        RenderLayer layer, 
        uint8_t viewPort, 
        uint64_t materialId, 
        uint64_t meshId, 
        Math::Vector3 position, 
        Math::Vector4 rotation, 
        Math::Vector3 scale
    ) -> DrawCall {
        
    }

    auto BuildDrawCallCommand(
        RenderLayer layer, 
        DrawCommand command
    ) -> DrawCall {

    }

#ifndef __swift__
}
#endif