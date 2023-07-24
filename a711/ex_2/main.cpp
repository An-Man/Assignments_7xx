#include "checktype.h"
#include <iostream>

// Assignment 7.1.1 Exercise 2

// Create a constexpr function that checks if a type can be decayed further.


int main()
{
    Bell::can_be_decayed(6);                // prints cannot be decayed

    Bell::can_be_decayed<const int>(6);     // prints can be decayed

    Bell::can_be_decayed<const int&>(6);    // prints can be decayed

    
    return 0;
}