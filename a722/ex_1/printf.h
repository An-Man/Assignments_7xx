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
    
    while (ss >> word) {
        if constexpr (word[0] == '%') {
            word = first;
            std::cout << word << " ";
            safe_printf(fmt, args...);
            return;
        }
        std::cout << word << " ";

        
    }
}



#endif