SET(
    SRC
    src/Renderer.cxx
)

add_library(Rendering STATIC ${SRC})

target_include_directories(Rendering PUBLIC include)
target_include_directories(Rendering PUBLIC ${CMAKE_SOURCE_DIR}/GameKit/Core/include)
target_include_directories(Rendering PUBLIC ${CMAKE_SOURCE_DIR}/GameKit/Math/include)

target_compile_options(Rendering PRIVATE
    -fno-exceptions
    -fignore-exceptions
)

set_target_properties(Rendering 
    PROPERTIES
    CXX_STANDARD 20
    OUTPUT_NAME Rendering
)