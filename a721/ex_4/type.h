#ifndef TYPE_H
#define TYPE_H
#include <iostream>
#include <type_traits>
#include <cassert>

// The function below uses a fold expression
// to check that all arguments are of arithmetic type,
// and again to calculate product of argument

template <typename... Ts>
auto product_by_count(const Ts&... values) {
    
    static_assert((std::is_arithmetic_v<Ts> && ...), "not arithmetic"); // fold expression

    return ((values * ...) * sizeof...(values)); // fold expression
}

#endif