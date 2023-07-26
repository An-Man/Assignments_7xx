#ifndef ARGUMENTS_H
#define ARGUMENTS_H

#include <cstdint>
#include <iostream>

template <std::size_t N>
class Bath
{
    public:
        constexpr static int args {N}; // number of args
        
        template <typename... Ts>
        Bath(Ts...) {}              // constructor

        void print_arg_count()
        {
            std::cout << args << '\n';
        }
};

// deduction guide
template <typename... Ts>
Bath(Ts...) -> Bath<sizeof...(Ts)>;  // puts argument count to N

#endif