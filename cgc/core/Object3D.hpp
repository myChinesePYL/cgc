#pragma once

#include <string>
namespace cgc {
  namespace core {
    class Object3D {
      public:
        Object3D();
      private:
        std::string name = "";
        
        ~Object3D();
    };
  }
}
