#ifndef HELLO_H
#define HELLO_H

#include <string>

namespace HelloLib {
    class World {
        public:
            static std::string getHello();
            static std::string getWorld();
    };
}

#endif