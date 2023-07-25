#include "printf.h"


int main()
{
    std::string str {"Yellow %x boats are leaving the shore"};

    safe_printf(str, "little");
}