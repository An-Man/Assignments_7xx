#ifndef PRINTF_H
#define PRINTF_H

#include <string>
#include <iostream>
#include <sstream>

template <typename T, typename... Ts>
void safe_printf(const std::string& fmt, T first, Ts... args)
{
    std::stringstream ss(fmt);

    std::string word;
    
    if constexpr (sizeof...(args) > 0) {

        while (ss >> word) {
            if (word[0] == '%') {
                word = first;
                std::cout << word << " ";
                safe_printf(fmt, args...);
            } else {
                std::cout << word << " ";
            }
        }
    }

    std::cout << word << " ";
}



#endif