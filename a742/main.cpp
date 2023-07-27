// Assignment 7.4.2

// Exercise 1: Create an interface for an UI element (a widget)
// with functionalities such as user actions "on_click()" etc.

// Exercise 2: Create a mock class that inherits the interface and implements
// its functions.

#include "ui.h"
#include <memory>

int main()
{
    Widget widg;
    Button button;
    Button b2 ("Button2");

    std::cout << b2.name << '\n';

    widg.on_click();        // prints "you clicked on widget"
    button.on_click();
    widg.on_key_press();    // makes a beep sound
    button.on_key_press();  // prints "beep"

    // print positions
    std::cout << "Widget position: " << widg.pos.x << ", " << widg.pos.y << '\n';
    std::cout << "Button position: " << button.pos.x << ", " << button.pos.y << '\n';

    // move elements
    widg.move_element();
    button.move_element();

    std::cout << "Widget position: " << widg.pos.x << ", " << widg.pos.y << '\n';
    std::cout << "Button position: " << button.pos.x << ", " << button.pos.y << '\n';

    return 0;
}