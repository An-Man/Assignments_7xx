#ifndef CHECKTYPE_H
#define CHECKTYPE_H
#include <iostream>


namespace blob
{
    template <typename T, typename U>
    constexpr bool check_same_type(const T& type1, const U& type2) {
        std::cout << "Different types!\n";
        return false;
    }

    template <typename T>
    constexpr bool check_same_type(const T& param1, const T& param2) {
        std::cout << "Same types!\n";
        return true;
    }
};

#endif