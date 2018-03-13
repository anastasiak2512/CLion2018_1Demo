//C++17 introduced structured binding – a convenient and compact way of binding a list of
// identifiers to a set of objects. CLion’s C++ language engine now supports this feature and
// ensues accurate code analysis for it.

#include <string>
#include <map>
#include <iostream>

void struct_bind_sample() {
    std::map<int, std::string> elements{{1, "Hello"}, {2, "World"}};

    for (const auto&[key, value] : elements) {
        std::cout << key << ": " << value << '\n';
    }
}

