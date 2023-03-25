#include <iostream>
#include <string>
#include <algorithm>


/*Нарисовать календарь.*/
	int main()
	{
		int n, k, j;
		std::cin >> k >> n;
		for (j = 1; j < k; j++)
			std::cout << "   ";
		for (int i = 1; i <= n; i++)
		{
			if ((i + k) < 10)
			{
				std::cout << " " << i << " ";
			}
			else if (i < 10)
			{
				std::cout << " " << i << " ";
			}
			else
			{
				std::cout << i << " ";
			}
			if ((i + k - 1) % (7) <= 0)
			{
				std::cout << " " << std::endl;
			}
		}
	} 
