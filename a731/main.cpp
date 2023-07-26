// Assignment 7.3.1 ex 1-3
//
// Ex 1. Create a template class and overload its < operator using static cast to template
//       parameter type.
// Ex 2. Create a new type and use CRTP to give it the comparison operator from ex 1.
// Ex 3. Create a new base class with a function to print out its type, which the type
//       from ex 2 inherits 

#include "template.h"
#include <iostream>

int main()
{
    Obelisk low {10};  // create two objects
    Obelisk high {50};

    std::cout << std::boolalpha << (low < high) << '\n'; // prints true
    std::cout << std::boolalpha << (low > high) << '\n'; // magically also prints true

    print_type(low); // prints "Type is class"

}