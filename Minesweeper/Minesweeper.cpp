
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int rows, cols, xmine, ymine, minesnum;
	std::cin >> rows >> cols;

	// создаЄм матрицу matrix из m строк, кажда€ из которых Ч вектор из n нулей
	std::vector<std::vector<char>> Minesweeper(rows, std::vector<char>(cols));
	for (int i = 0; i != rows; ++i)
	{
		for (int j = 0; j != cols; ++j)
		{
			Minesweeper[i][j] = '0';
		}
	}

	std::cin >> minesnum;

	for (int i = 0; i < minesnum; i++)
	{
		std::cin >> xmine >> ymine;
		Minesweeper[static_cast<std::vector<std::vector<char, std::allocator<char>>, std::allocator<std::vector<char, std::allocator<char>>>>::size_type>(xmine) - 1][static_cast<std::vector<char, std::allocator<char>>::size_type>(ymine) - 1] = '*';
	}

	while (minesnum != 0)
	{
		for (int i = 0; i != rows; ++i)
		{
			for (int j = 0; j != cols; ++j)
			{
				if (Minesweeper[i][j] == '*')
				{
					minesnum--;
					for (int ii = 0; ii != rows; ++ii)
					{
						for (int jj = 0; jj != cols; ++jj)
						{
							if ((abs(i - ii) <= 1) && (abs(j - jj) <= 1) && (Minesweeper[ii][jj] != '*'))
							{
								Minesweeper[ii][jj] += 1;
							}
						}
					}
				}
			}
		}

	}


	for (int i = 0; i != rows; ++i)
	{
		for (int j = 0; j != cols; ++j)
		{
			std::cout << Minesweeper[i][j] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}

//int main()
//{
//	int raw = 3, column = 3, MinesSum = 1;
//
//	int xmine = 0, ymine = 0;
//	//	std::cin >> raw >> column >> MinesSum;
//
//	
//
//	for (auto x : MinesX)
//	{
//	std::cout << "MinesX " << x << "/ ";
//	}
//
//	/*for (int i = 1; i <= r; ++i)
//	{
//		raw.push_back(0);
//	}	
//	for (int j = 1; j <= c; ++j)
//	{
//	col.push_back(0);
//	}
//	*///	std::cout << std::endl;
//
//	
//	for (int i = 0; i < raw; ++i)
//	{
//		//std::cout << i << " ";
//		for (int j = 0; j < column; ++j)
//		{
//		std::cout << "* ";
//		}
//		std::cout << std::endl;
//	}
//		std::cout << "" << std::endl;
//		
//	return 0;
//}
