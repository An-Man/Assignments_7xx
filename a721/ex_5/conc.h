#ifndef TYPE_H
#define TYPE_H
#include <type_traits>
#include <vector>

// Using recursion, contents of the containers are put to the empty container

template <typename T, typename... Ts>
auto concat_conts(std::vector<int>& result, const T& first, const Ts&... rest) {
    
    for (auto& n : first)
    {
        result.push_back(n);
    }

    if constexpr (sizeof...(rest) > 0) {
        concat_conts(result, rest...);
    }

    return result;
}

#endif