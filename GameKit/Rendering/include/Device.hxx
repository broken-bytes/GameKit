#pragma once

#include "Buffer.hxx"
#include <string>

namespace Rendering {

    class Device {

        virtual auto CreateVertexBuffer() -> Buffer = 0;
    };
}