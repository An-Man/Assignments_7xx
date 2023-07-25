#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>
#include <type_traits>
#include <cassert>

// template function with parameter pack
template <typename T, typename... Ts>
T sum(T first, Ts... rest) {
    
    static_assert(std::is_arithmetic_v<T>, "not arithmetic");
    
    if constexpr (sizeof...(rest) > 0) {
        return first + sum(rest...);
    }
    
    return first;
}


#endif