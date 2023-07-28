#include "grid.h"


int main()
{
    Grid<int> grid;

    grid.print_size();

    grid.print_data();

    std::cout << grid.at(0,0) << '\n';
    std::cout << grid.at(1,1) << '\n';

    grid.at(0,0) = 5;

    grid.print_data();

    return 0;
}