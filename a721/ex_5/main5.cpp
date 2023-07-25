// Assignment 7.2.1

// Exercise 5: Create a function that takes arbitrary number of containers as 
// arguments and creates a concatenated container.  

#include "conc.h"
#include <iostream>
#include <list>

int main()
{
    std::vector<int> cont {};  // create an empty container to give as an argument
     
    concat_conts(cont, std::vector{1, 2, 4, 3}, std::list{5, 8}, std::vector{6, 7});

    for (auto& num : cont)     // print results
    {
        std::cout << num << ", ";
    }

    std::cout << '\n';

    return 0;
}