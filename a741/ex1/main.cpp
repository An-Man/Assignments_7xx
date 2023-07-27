// Assignment 7.4.1

// Exercise 1: Create a virtual base class, inheriting classes and function make_sound()
// Exercise 2: Add more virtual functions: is_fluffy() and eats_grass()
// Exercise 3: Create a free function that takes animal reference as a parameter 
//   and demonstrates functions
// Exercise 4: Add a name member for the animal class and default values for the others
// Exercise 5: Try creating a std::vector of animal type

#include "animal.h"
#include <vector>

int main()
{
    Dog dog {};
    Cow cow {};

    cow.make_sound();       // function overriden from base class
    dog.make_sound();

    bool fluffy {cow.is_fluffy()};
    std::cout << std::boolalpha << fluffy << '\n'; // prints false
    fluffy = dog.is_fluffy();
    std::cout << std::boolalpha << fluffy << '\n'; // prints true

    make_sound(dog);     // free functions 
    make_sound(cow);

    print_eats_grass(dog);
    print_eats_grass(cow);

    print_stats(cow);   // demostrate functions of objects
    print_stats(dog);

    std::vector<Animal> animals {};  // ex 5: vector of animals - works

    // animals.push_back(cow);          // none of these function without pointers
    // animals.push_back(dog);

    // for (auto& animal: animals)
    // {
    //     print_stats(animal);
    // }


}