//To avoid polluting an ambient scope or creating an artificial scope for initializers
// in if and switch operators, C++17 suggests adding an initializer to if and switch conditions.
// CLion now parses and resolves such statements correctly.

#include <mutex>
#include <map>
#include <iostream>

void mutex_sample() {
    std::mutex mtx;
    if (std::unique_lock<std::mutex> l(mtx, std::try_to_lock); l.owns_lock())
        std::cout << "success\n";
    else
        std::cout << "fail\n";
}

void map_sample_find() {
    std::map<int, std::string> my_map{{10, "ten"}};

    if (auto it = my_map.find(10); it != my_map.end())
        std::cout << it->second;
}

