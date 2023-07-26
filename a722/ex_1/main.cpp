// Assignment 7.2.2
// Exercise 1

// Create a template function that 
// checks that the arguments given to the printf are of 
// correct type.  (It is enough to handle some of them).

#include "printf.h"

int main()
{
    std::string str {"Yellow %s boats are leaving the %s shore at %d o'clock."};
    std::string arg1 {"little"};
    std::string arg2 {"blue"};

    safe_printf(str, arg1, arg2, 6);    // call print function with arguments
                                        // !! argument count is not checked 
}