#include <iostream>
#include <string>
#include <vector> 

//Транспонировать матрицу
//Дана прямоугольная матрица A из m строк и n столбцов.Транспонированной матрицей
//AT называется матрица из n строк и m столбцов, в которой строки и столбцы поменялись ролями : элемент
//AT ij равен элементу A ji.
//Напишите функцию, которая возвращает транспонированную матрицу :
//std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix);


std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix)
{
	int rowsT = matrix[0].size();
	int colsT = matrix.size();

	std::vector<std::vector<int>> matrixT(rowsT, std::vector<int>(colsT));
	for (size_t m = 0; m < rowsT; ++m)
	{
		for (size_t n = 0; n < colsT; ++n)
		{
			matrixT[m][n] = matrix[n][m];
			std::cout << matrixT[m][n] << "\t";
		}
		std::cout << std::endl;
	}
	return matrixT;
}
 

int main()
{
	//std::cin >> rows >> cols;

	//	// создаём матрицу matrix из m строк, каждая из которых — вектор из n нулей
	//std::vector<std::vector<char>> Minesweeper(rows, std::vector<char>(cols));
	//for (int i = 0; i != rows; ++i)
	//{
	//	for (int j = 0; j != cols; ++j)
	//	{
	//		Minesweeper[i][j] = '0';
	//	}
	//}

	int rowsA = 3, colsA = 5;
	std::vector<std::vector<int>> matrixA(rowsA, std::vector<int>(colsA));
	 
	for (size_t m = 0; m < rowsA; ++m)
	{
		for (size_t n = 0; n < colsA; ++n)
		{
			matrixA[m][n] = rand() %10;
			std::cout << matrixA[m][n] << "\t";
		}
		std::cout << std::endl;
	}
	
	Transpose(matrixA);
	//int rowsT = matrixA[0].size();
	//int colsT = matrixA.size();
	//std::cout << "rowsA " <<  << std::endl;
	//std::cout << "colsA " <<  << std::endl;
	/*int rowsAT = matrixA[0].size(), colsAT = matrixA.size();
	std::vector<std::vector<int>> matrixAT(rowsAT, std::vector<int>(colsAT));
	for (size_t m = 0; m < rowsAT; ++m)
	{
		for (size_t n = 0; n < colsAT; ++n)
		{
			matrixAT[m][n] = matrixA[n][m];
			std::cout << matrixAT[m][n] << "\t";
		}
		std::cout << std::endl;
	}*/
	return 0;
}
	  