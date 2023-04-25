#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>


//Сортировка точек
//Вам даны координаты точек на плоскости.Выведите эти точки в порядке возрастания расстояний до начала координат.
//Формат ввода
//Сначала задано количество точек n.Затем идет последовательность из n строк, 
// каждая из которых содержит два целых числа — координаты точки.Величина n не превосходит 100. Координаты точек по модулю также не превосходят 100.
//Формат вывода
//Выведите через пробел кординаты точек в порядке возрастания расстояний до начала координат.После каждой пары координат печатайте перевод строки.



void InsertionSort(std::vector<std::pair<int, int>>& dots)
{
	int dotscount = dots.size();

	for (int i = 1; i < dotscount; i++)
	{
		if ((abs(dots[i].first) < 100) && (abs(dots[i].second) < 100) && (dotscount < 100))
		{	
		std::pair<int, int> key = dots[i];
		int j = i - 1;
		double lengthnext = sqrt((dots[i].first * dots[i].first) + (dots[i].second * dots[i].second));
		double lengthprev = sqrt((dots[j].first * dots[j].first) + (dots[j].second * dots[j].second));

		while (j >= 0 && lengthnext < lengthprev)
		{ 
			dots[j + 1] = dots[j];
			j--;
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
	  