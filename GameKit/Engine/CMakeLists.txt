set(
    SRC
    GameKit.swift
)

add_library(Engine SHARED ${SRC})

target_compile_options(Engine PRIVATE -enable-experimental-cxx-interop)
target_link_libraries(Engine PRIVATE Rendering)