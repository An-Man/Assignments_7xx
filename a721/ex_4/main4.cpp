// Assignment 7.2.1

// Exercise 4: Create a function that takes arbitrary number of arguments and return the product of the
// arguments times the number of arguments.

#include "type.h"

int main()
{
    std::cout << product_by_count(2, 4) << '\n';        // prints 16

    std::cout << product_by_count(2.2f , 3.3f) << '\n'; // prints 14.52

    // std::cout << product_by_count("ssd", 5, 2) << '\n'; // static assertion fails

    return 0;
}