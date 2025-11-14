#ifndef UTIL_HPP

#include <string>
#include <vector>
#include <GL/glew.h>

namespace splat::util {

std::string read_file(std::string const& path);

GLuint link_shaders(std::vector<GLuint> const& shaders);
GLuint load_shader(std::string const& path, GLenum type);

void cleanup();

static std::vector<GLuint> shaders{};

};  // namespace splat::util

#define UTIL_HPP
#endif  // UTIL_HPP
