#ifndef GRID_H
#define GRID_H
#include <vector>
#include <cstdint>
#include <iostream>

struct Size
{
    int width {};
    int height {};
};

struct Position
{
    std::size_t col {};
    std::size_t row {};
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
        
        Grid<T>() {
            data = {2,4,6,3,7,4,1,8,9};
            size.height = 3;
            size.width = 3;
        }

        void print_data() {
            for (int i = 0; i < (size.height*size.width); ++i) {
                if (i % size.height == 0 && i != 0) {
                    std::cout << '\n';
                }
                std::cout << data[i];
            }
            std::cout << '\n';
        }

        void print_size() {
            std::cout << size.height << ", " << size.width << '\n';
        }

        T& at(int row, int col) {
            return data[row * size.height + col];
        }

    private:

        storage_type data;
        Size size {};
        Position pos {};

               
};


#endif