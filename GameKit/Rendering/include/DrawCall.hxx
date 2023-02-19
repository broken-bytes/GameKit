#pragma once 

#include "Common/PCH.hxx"
#include "RenderLayer.hxx"
#include "DrawSpace.hxx"
#include "Math/Vector3.hxx"
#include "Math/Vector4.hxx"

#ifndef __swift__
namespace Rendering {
#endif

    class GPUTask {
        
        public:
        enum class CommandType {
            CLEAR_COLOR,
            CLEAR_DEPTH
        };

        GPUTask(
            Rendering::DrawSpace space,
            uint8_t viewPortId,
            Rendering::RenderLayer layer
        ) {
            key = 0;
        }

        protected:
        uint64_t key;
    };

    class GPUDrawCall: public GPUTask {
        
        public:
        GPUDrawCall(
            Rendering::DrawSpace space,
            uint8_t viewPortId,
            Rendering::RenderLayer layer,
            uint32_t materialId,
            uint8_t depth,
            uint64_t meshId, 
            Math::Vector3 position,
            Math::Vector4 rotation,
            Math::Vector3 scale
        ) : GPUTask(space, viewPortId, layer){

        }

        private:
        uint64_t _meshId;
        Math::Vector3 _position;
        Math::Vector4 _rotation;
        Math::Vector3 _scale;
    };

    class GPUCommand: public GPUTask {
        
        public:
        GPUCommand(
            Rendering::DrawSpace space,
            uint8_t viewPortId,
            Rendering::RenderLayer layer,
            GPUTask::CommandType command
        ): GPUTask(space, viewPortId, layer) {

        }
    };

    auto BuildDrawCall(
        Rendering::DrawSpace space,
        uint8_t viewPort, 
        Rendering::RenderLayer layer, 
        uint64_t materialId, 
        uint8_t depth,
        uint64_t meshId, 
        Math::Vector3 position, 
        Math::Vector4 rotation, 
        Math::Vector3 scale
    ) -> GPUDrawCall {
        return GPUDrawCall(space, viewPort, layer, materialId, depth, meshId, position, rotation, scale);
    }

    auto BuildDrawCallCommand(
        Rendering::DrawSpace space,
        uint8_t viewPort, 
        Rendering::RenderLayer layer, 
        GPUTask::CommandType command
    ) -> GPUCommand {
        return GPUCommand(space, viewPort, layer, command);
    }

#ifndef __swift__
}
#endif