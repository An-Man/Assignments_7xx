#include "ui.h"

Widget::Widget() {
    pos.x = 0;
    pos.y = 0;
}

void Widget::on_click() {
    std::cout << "You clicked on a Widget\n";
}

void Widget::on_hover() {
    // show_info();     // not implemented here
}

void Widget::on_key_press() {
    std::cout << '\a';  // plays system beep sound 
}

void Widget::move_element() { //moves element by 10 to the right and down
    pos.x += 10;
    pos.y += 10;
}

Widgets Widget::add_child_widget(std::string name, Widgets& ws) { 
    // create child widgets in a safe way :D
    return ws;              
}

Widgets Widget::remove_child_widget(std::string inpname, Widgets& ws) {
    // remove child widget
    return ws;
}

void Widget::list_child_widgets(Widgets& ws) {
    for (auto widget : ws) {
        std::cout << widget->name << '\n';
    }
}

Button::Button() {
    pos.x = 20;
    pos.y = 20;
    name = "Button";
}

Button::Button(std::string input) {
    pos.x = 20;
    pos.y = 20;
    name = input;
}

void Button::on_click() {
    std::cout << "You clicked on a Button\n";
}

void Button::on_key_press() {
    std::cout << "Beep\n";
}

void Button::move_element() { //moves element to the right and down by 5
    pos.x += 5;
    pos.y += 5;
}

Button::~Button() {}