cmake_minimum_required(VERSION 3.22)
project(engine_x)

set(CMAKE_CXX_STANDARD 23)

set(SOURCE_FILES
    src/main.cpp
    src/application.cpp src/application.h)

add_executable(engine_x ${SOURCE_FILES})

add_subdirectory(vendor)

set(INCLUDE_DIR vendor/glm)

target_include_directories(engine_x PRIVATE ${INCLUDE_DIR})

set(LIB
    glfw
    imgui
    vulkan
    )
target_link_libraries(engine_x ${LIB})
