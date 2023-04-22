#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>
#include <utility>


//Сортировка точек
//Вам даны координаты точек на плоскости.Выведите эти точки в порядке возрастания расстояний до начала координат.
//Формат ввода
//Сначала задано количество точек n.Затем идет последовательность из n строк, каждая из которых содержит два целых числа — координаты точки.Величина n не превосходит 100. Координаты точек по модулю также не превосходят 100.
//Формат вывода
//Выведите через пробел кординаты точек в порядке возрастания расстояний до начала координат.После каждой пары координат печатайте перевод строки.


//std::vector<int, int> SortDots(const int& x, const int& y)
//{
//
//	std::vector<int, int> result(int sx, int sy);
//
//	return result(x, y);
//}


	/*int sumdots, px, py;
	std::vector < std::pair<int, int>> dots;
	std::cout << "num of dots?" << std::endl;
	std::cin >> sumdots;

	for (int i = 0; i < sumdots; ++i)
	{
		std::cin >> px >> py;
		dots.push_back(std::make_pair(px, py));
	}
	for (int i = 0; i < sumdots; ++i)
	{
		int key = dots[i].first;
		int j = i - 1;
		while ((j >= 0) && (dots[i].first > key))
		{
			dots[j + 1].first = key;
			j = j - 1;
		}
		dots[i + 1].first = key;
	}*/

	//std::vector<std::pair<int, int>> dots = { {5, 10}, {1, 1}, {5, 2}, {3, 6}, {2, 7} };
//std::cout << "num of dots?" << std::endl;

void InsertionSort(std::vector<std::pair<int, int>>& dots) 
{
	int n = dots.size();
	for (int i = 1; i < n; i++) {
		std::pair<int, int> key = dots[i];
		int j = i - 1;
		while (j >= 0 && dots[j].first > key.first) {
			dots[j + 1] = dots[j];
			j--;
		}
		dots[j + 1] = key;
	}
}
int main()
{
	int sumdots, x, y;
	std::vector < std::pair<int, int>> dots;
	std::cin >> sumdots;
	if (sumdots > 100)
	{
		return 0;
	}
	for (int i = 0; i < sumdots; ++i)
	{
		std::cin >> x >> y;
		dots.push_back(std::make_pair(x, y));
	}
	InsertionSort(dots);

	for (std::pair<int,int> dot : dots)
	{
		std::cout << dot.first << ' ' << dot.second << std::endl;
	}
	return 0;
}
	  