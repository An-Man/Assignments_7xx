// Assignment 7.2.1

// Exercise 3: A function to check if any
// number of types given are all the same.

#include "checktype.h"

int main()
{
    check_all_same_type(6, 7, 9, 11);

    std::string one {"Nice"};
    std::string two {"Hat"};

    // std::string type gives same type
    check_all_same_type(one, two);

    // string literals prints "not same type" unless same size
    check_all_same_type("white", "two"); 

    check_all_same_type('f', 'C', 'm');

    check_all_same_type(5.0f, 689.00f);

    check_all_same_type(2, "unlimited");


    return 0;
}