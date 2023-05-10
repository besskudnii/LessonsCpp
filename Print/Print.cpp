#include <iostream>
#include <vector>

#include <array>
#include <iterator>
 
 

template <typename T>
void Print(const T& container, const std::string& delimiter)
{
    for (auto it = std::begin(container); it != std::end(container); ++it)
    {
        std::cout << *it;
        if (it < std::end(container) -1)
        {
            std::cout << delimiter;
        }
    }
    std::cout << std::endl;
}
 

int main()
{
    std::vector<int> first = { 5, 1, 7, 7};
    Print(first, ", ");

    std::array<int, 2> second = { 5, 1 };
    Print(second, ", ");
}