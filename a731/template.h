#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <type_traits>
#include <iostream>

template <typename Derived>     // base class
class Compare {
};

template <typename Derived>     // another base class
class Printtype {
};

template <typename Derived>     // check type function
void print_type(const Printtype<Derived>&)
{
    if (std::is_class_v<Derived>) {
        std::cout << "Type is class\n";
    }
    if (std::is_arithmetic_v<Derived>) {
        std::cout << "Type is arithmetic\n";
    }
}

template <typename Derived>     // operator overload from > to <
bool operator>(const Compare<Derived>& first, const Compare<Derived>& second)
{
    return (static_cast<const Derived&>(first) < static_cast<const Derived&>(second));
}

// class derives from base class with class as template parameter
class Obelisk : public Compare<Obelisk>, public Printtype<Obelisk>
{
    public:
        Obelisk() = default;

        Obelisk(int new_height) : height(new_height) {};

        bool operator<(const Obelisk& other) const
        {
            return (height < other.height);
        }

    private:
        int height {};
};

#endif