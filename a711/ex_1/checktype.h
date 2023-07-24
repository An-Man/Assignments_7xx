#ifndef CHECKTYPE_H
#define CHECKTYPE_H
#include <iostream>


namespace Blob          // two versions of the function, two templates 
{
    template <typename T, typename U>
    constexpr bool check_same_type(const T&, const U&) {
        std::cout << "Different types!\n";
        return false;
    }

    template <typename T>
    constexpr bool check_same_type(const T&, const T&) {
        std::cout << "Same types!\n";
        return true;
    }
};

#endif