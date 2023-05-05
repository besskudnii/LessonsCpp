#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>

#include <iostream>
#include <iterator>

//template<typename Container>
//void Print(const Container& container, const std::string& delimiter)
//{
//    std::copy(container.begin(), container.end(), std::ostream_iterator<typename Container::value_type>(std::cout, delimiter.c_str()));
//    std::cout << std::endl;
//}


#include <iostream>
#include <vector>

template <typename T>
void Print(const T& container, const std::string& delimiter)
{
    if (container.size() == 0)
    {
        std::cout << "";
    }
        auto it = std::begin(container);
    if (it != std::end(container))
    {
        std::cout << *it;
        ++it;
        for (auto it = std::begin(container); it != std::end(container); ++it)
        {
            std::cout << delimiter << *it;
        }

    }
    std::cout << std::endl;
}

//template <typename T>
//void Print(const std::vector<T>& temp, const std::string& delimetr)
//{
//    for (auto i : temp)
//    {
//        std::cout << i << delimetr;
//    }
//}

//
//template <typename T>
//void Print(const std::array<T, size_t &Size> &temp, const std::string& delimetr)
//{
//    for (auto i : temp)
//    {
//        std::cout << i << delimetr;
//    }
//    std::cout << std::endl;
//}

int main()
{
    std::vector<int> first = { 5, 1 , 7 ,7};
    Print(first, ", ");

    std::array<int, 2> second = { 5, 1 };
    Print(second, ", ");
}