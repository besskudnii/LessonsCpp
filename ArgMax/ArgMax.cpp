#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix)
{
	
	size_t rows = matrix.size(), cols= matrix[0].size();
	
	size_t xmax = 0, ymax = 0;
	for (size_t x = 0; x != rows; ++x)
	{
		for (size_t y = 0; y != cols; ++y)
		{
			if (matrix[x][y] > matrix[xmax][ymax] && matrix[x][y])
			{
				xmax = x;
				ymax = y;
			}
		}
	}
	return { xmax, ymax };
}
int main()
{
	int rows=3, cols=4;
	//std::cin >> rows >> cols;

	std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

	for (int x = 0; x != rows; ++x)
	{
		for (int y = 0; y != cols; ++y)
		{
			std::cin >> matrix[x][y];
		//	matrix[x][y] = rand()%100;

		}
	}


	for (int x = 0; x != rows; ++x)
	{
		for (int y = 0; y != cols; ++y)
		{
			std::cout << matrix[x][y] << " ";
		}
		std::cout << std::endl;
	}
	
	//std::cout << matrix[0].size();
	
std::cout << MatrixArgMax(matrix).first << " " << MatrixArgMax(matrix).second;

return 0;
}   