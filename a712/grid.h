#ifndef GRID_H
#define GRID_H
#include <vector>
#include <cstdint>
#include <iostream>

struct Size
{
    std::size_t width {};
    std::size_t height {};
};

struct Position
{
    std::size_t x {};
    std::size_t y {};
};

template <typename T>
class Grid
{
    public:
        using storage_type = typename std::vector<T>;
        using value_type = typename storage_type::value_type;
        using reference = typename storage_type::value_type&;
        using const_reference = const typename storage_type::value_type&;
        using iterator = typename storage_type::iterator;
        using const_iterator = typename storage_type::const_iterator;
        using difference_type = typename storage_type::difference_type;
        using size_type = typename storage_type::size_type;
        
        Grid<T>()
        {
            storage_type data {};
            size.height = 2;
            size.width = 2;
            pos.x = 0;
            pos.y = 0;
        }

        void print_size()
        {
            std::cout << size.height << ", " << size.width << '\n';
        }

    private:
        storage_type data;
        Size size {};
        Position pos {};

               
};


#endif