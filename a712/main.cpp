// Assignment 7.1.2: A container for a 2D grid

// Exercise 1: Create a template class for the grid
// Exercise 1.5: Create helper types for size and position
// Exercise 2: Implement accessing a grid element and printing contents of container
// Exercise 3: Implement begin(), end() and const-overloads
// Exercise 4: Implement getting current grid size

#include "grid.h"
#include <algorithm>


int main()
{
    Grid<int> grid;

    grid.print_data();
    grid.print_size();

    std::cout << grid.at(0,0) << '\n';  // prints element 
    std::cout << grid.at(1,1) << '\n';

    grid.at(0,0) = 5;                   // changes element value 

    grid.print_data();

    std::cout << *grid.begin() << '\n'; // testing iterator

    std::fill(grid.begin(), grid.end(), 6); // use std::fill from algorithms: fill with '6'

    grid.print_data();

    Grid<int> grid2 (4);                // make a new grid with size
    grid2.print_size();
    std::fill(grid2.begin(), grid2.end(), 7);
    grid2.print_data();
  
    return 0;
}