cmake_minimum_required(VERSION 3.22)

add_subdirectory(vulkan)

#glfw
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(glfw)
#

#imgui
add_library(imgui STATIC
            imgui/imconfig.h
            imgui/imgui.cpp
            imgui/imgui.h
            imgui/imgui_demo.cpp
            imgui/imgui_draw.cpp
            imgui/imgui_internal.h
            imgui/imgui_tables.cpp
            imgui/imgui_widgets.cpp
            imgui/imstb_rectpack.h
            imgui/imstb_textedit.h
            imgui/imstb_truetype.h
            imgui/backends/imgui_impl_glfw.h
            imgui/backends/imgui_impl_glfw.cpp
            imgui/backends/imgui_impl_vulkan.h
            imgui/backends/imgui_impl_vulkan.cpp
            )
target_include_directories(imgui PUBLIC imgui)
target_link_libraries(imgui glfw vulkan)
#
