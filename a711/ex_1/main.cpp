// Assignment 7.1.1 

// Exercise 1

// Create a constexpr function that checks if two types the same. (Hint:  You do not need
// any library functionality (i.e. headers) for this)

#include "checktype.h"
#include <iostream>


int main()
{
    

    Blob::check_same_type(6, 6);        // prints "Same types!"

    Blob::check_same_type("sjd", 6.7);  // prints "Different types!"


    return 0;
}