#ifndef CHECKTYPE_H
#define CHECKTYPE_H
#include <iostream>
#include <type_traits>


namespace Bell
{
    template <typename T>
    constexpr bool can_be_decayed(T) {
        if (std::is_same_v<std::decay_t<T>, T>)
        {
            std::cout << "Cannot be decayed further\n";
            return false;
        } else {
            std::cout << "Can be decayed further\n";
            return true;
        }
    }
};

#endif