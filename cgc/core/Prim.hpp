#pragma once
#include <glm/glm.hpp>

namespace cgc {
namespace core {
class Prim {
public:
  glm::vec3 pos{0.0, 0.0, 0.0};
  glm::vec3 rot{0.0, 0.0, 0.0};
  glm::vec3 scale{1.0, 1.0, 1.0};
  glm::vec3 data[3] = {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}};
};
} // namespace core
} // namespace cgc
