#include "printf.h"


int main()
{
    std::string str {"Yellow %b boats are leaving the %b shore"};

    safe_printf(str, "little", "box");
    std::cout << '\n';
}