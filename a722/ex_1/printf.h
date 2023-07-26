#ifndef PRINTF_H
#define PRINTF_H

#include <string>
#include <iostream>
#include <type_traits>
#include <stdexcept>

template <typename T, typename... Ts>
void safe_printf(std::string& fmt, T first, Ts... args)
{
    int pos_fs = fmt.find("%");                     // find first %
    
    std::string start = fmt.substr (0, pos_fs);     // make substring from start to %
    std::cout << start;                             // print from start to %

    std::string fmts = fmt.substr (pos_fs, 2);      // make substring of "%_"

        if (fmts == "%s" && std::is_same_v<T, std::string>) { // check % and type of first arg
            std::cout << first;
        } else if (fmts == "%d" && std::is_arithmetic_v<T>) {
            std::cout << first;
        } else {
            throw std::runtime_error("Bad argument type");
        }
    
    std::string rest = fmt.substr (pos_fs + 2);     // make a substring of the rest of string
    
    if constexpr (sizeof...(args) > 0) {
        fmt = rest;                                 // replace string with rest
        safe_printf(fmt, args...);                  // recur with rest of string and args
    }

    if constexpr (sizeof...(args) == 0) {
        std::cout << rest << '\n';                  // if args are exhausted, 
    }                                               // print rest of the string
}

#endif