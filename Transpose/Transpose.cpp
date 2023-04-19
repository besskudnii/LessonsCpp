#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//Транспонировать матрицу
//Дана прямоугольная матрица A из m строк и n столбцов.Транспонированной матрицей
//AT называется матрица из n строк и m столбцов, в которой строки и столбцы поменялись ролями : элемент
//AT ij равен элементу A ji.
//Напишите функцию, которая возвращает транспонированную матрицу :
//std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix);


std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix)
{
 
}

int main()
{
	std::vector<std::vector<int>> matrix;
	size_t sizem = 3, sizen = 5;
	for (size_t m = 0; m < sizem; ++m)
	{
		for (size_t n = 0; n < sizen; ++n)
		{
			matrix[m, n] = rand();

		}
	}
		
	
}
	  