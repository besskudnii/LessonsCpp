#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <list>


//Сортировка точек
//Вам даны координаты точек на плоскости.Выведите эти точки в порядке возрастания расстояний до начала координат.
//Формат ввода
//Сначала задано количество точек n.Затем идет последовательность из n строк, 
// каждая из которых содержит два целых числа — координаты точки.Величина n не превосходит 100. Координаты точек по модулю также не превосходят 100.
//Формат вывода
//Выведите через пробел кординаты точек в порядке возрастания расстояний до начала координат.После каждой пары координат печатайте перевод строки.


using Point = std::pair<int, int>;
constexpr int Count = 100;

void SortDots(std::vector<Point>& dots)
{
	std::vector<std::list<Point>> _sortPoints;
	_sortPoints.resize(Count * Count);

	for (const Point& p : dots)
	{
		_sortPoints[std::abs(p.first + p.second)].push_back(p);
	}

	dots.clear();
	for (auto& points : _sortPoints)
	{
		for (auto& p : points)
		{
			dots.push_back(p);
		}
	}
}


void InsertionSort(std::vector<std::pair<int, int>>& dots)
{
	int dotsCount = dots.size();

	for (int i = 1; i < dotsCount; i++)
	{
		if ((abs(dots[i].first) < 100) && (abs(dots[i].second) < 100) && (dotsCount < 100))
		{	
		std::pair<int, int> key = dots[i];
		int j = i - 1;
		double lengthNext = sqrt((dots[i].first * dots[i].first) + (dots[i].second * dots[i].second));
		double lengthPrev = sqrt((dots[j].first * dots[j].first) + (dots[j].second * dots[j].second));
		if (lengthNext < lengthPrev)
		{ 
			while (j >= 0)
			{ 
				dots[j + 1] = dots[j];
				j--;
			}
		}
		dots[j + 1] = key;
		}
	}
}
 

//std::vector < std::pair<int, int>> dots;
/*std::cin >> dotscount;
if (dotscount > 100)
{
	return 0;
}
for (int i = 0; i < dotscount; ++i)
{
	std::cin >> x >> y;
	dots.push_back(std::make_pair(x, y));
}*/

int main()
{
	std::vector<std::pair<int, int>> dots = { {5, 9}, {5, 1}, {5, 2}, {4, 9}, {3, 2}, {3, 7} };
	InsertionSort(dots);
	for (std::pair<int,int> dot : dots)
	{
		std::cout << dot.first << ' ' << dot.second << std::endl;
	}
	return 0;
}
	  