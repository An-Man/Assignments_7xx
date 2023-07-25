#ifndef CHECKTYPE_H
#define CHECKTYPE_H
#include <iostream>
#include <type_traits>

// The function below uses a fold expression
// to check if T is same type as Ts...[0], Ts...[1] and so on 

template <typename T, typename... Ts>
void check_all_same_type(const T&, const Ts&...) {
    
    if constexpr ((std::is_same_v<T, Ts> && ...)) // fold expression here
    {
        std::cout << "All same type\n";
    } else {
        std::cout << "Not all same type\n";
    }
}

#endif