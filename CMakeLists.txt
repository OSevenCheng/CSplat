cmake_minimum_required(VERSION 4.1.0 FATAL_ERROR)
project(Splat)

find_package(glfw3 REQUIRED)
set(OpenGL_GL_PREFERENCE GLVND)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glm CONFIG REQUIRED)

set(LIBRARIES ${LIBRARIES} ${OPENGL_LIBRARIES} glfw ${GLEW_LIBRARIES} glm::glm)

# generate compile_commands.json
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

add_subdirectory(src)
set_target_properties(splat PROPERTIES OUTPUT_NAME "eq-splat")
