#ifndef UI_H
#define UI_H

#include <iostream>
#include <vector>
#include <string>

struct Position
{
    int x {};
    int y {};
};

class Widget;  // forward declare class for alias

using Widgets = std::vector<Widget*>; // type alias for vector of pointers to base class

class Widget
{
    public:
        Position pos {};
        std::string name {"Widget_name"};
        
        Widget();

        virtual void on_click();
        void on_hover();            // not virtual as it is not overriden
        virtual void on_key_press();

        virtual void move_element();

        // the following are not implemented yet
        virtual Widgets add_child_widget(std::string name, Widgets& ws);
        virtual Widgets remove_child_widget(std::string inpname, Widgets& ws);
        virtual void list_child_widgets(Widgets& ws);

        virtual ~Widget() = default;
};

class Button : public Widget
{
    public:
        Button();

        Button(std::string input);

        void on_click() override;
        void on_key_press() override;
        virtual void move_element() override;

        virtual ~Button();  
};


#endif