#include "Renderer.hxx"

#include "RenderLayer.hxx"
#include "DrawCall.hxx"

#include <vector>

namespace Rendering {
    
    namespace Renderer {

        std::vector<Rendering::GPUTask> GpuTasks = {};

        void Draw(
            Rendering::RenderLayer layer, 
            uint8_t viewPort, 
            uint64_t materialId, 
            uint64_t meshId, 
            Math::Vector3 position, 
            Math::Vector4 rotation, 
            Math::Vector3 scale
        ) {   
        
        }
    }
}