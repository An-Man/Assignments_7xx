#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>

// overload with one parameter
template <typename T>
void print_int(T last) {  
    std::cout << last << '\n';  
}

// overload with parameter pack
template <typename T, typename... Ts>
void print_int(T first, Ts... rest) {
    std::cout << first << ", "; 
    print_int(rest...);         // recursion
}

// function that breaks recursion with if constexpr
template <typename T, typename... Ts>
void print_int_v2(T first, Ts... rest) {
    std::cout << first;

    if constexpr (sizeof...(rest) > 0) {
        std::cout << ", ";
        print_int_v2(rest...);
    }
}

#endif