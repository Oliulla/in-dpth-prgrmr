#ifndef PRINT_H
#define PRINT_H

#include <iostream>
#include <vector>
#include "print.cc"


// Template for any single value (like int, float, string, etc.)
template<typename T>
void print(const T& value) {
    std::cout << value << "\n";
}

// Template specifically for vector<T>
template<typename T>
void print(const std::vector<T>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]\n";
}

#endif
