// Assignment 2.7.7
// Exercise 2

// Create a class where the constructor takes any number of 
// arguments and store that number in class template parameters or otherwise.

// Create a function to return the number of arguments 
// the constructor was called with.


#include "arguments.h"

int main()
{
    Bath bath (1, 4, 5); // use constructor with n arguments

    bath.print_arg_count();

}