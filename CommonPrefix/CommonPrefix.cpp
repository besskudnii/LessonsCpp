#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//Напишите функцию для вычисления наибольшего общего префикса строк, переданных в векторе words:
//std::string CommonPrefix(const std::vector<std::string>& words);
//Например, для пустого вектора функция должна вернуть пустую строку, а для вектора из строк "apple", "apricot" и "application" — строку "ap".
//Примечание
//В решении не должно быть функции main : она будет в нашей тестирующей программе.Подключите необходимые библиотеки и напишите код функции CommonPrefix.
std::string CommonPrefix(const std::vector<std::string>& words) 
{
	std::string prefix;
	std::vector <std::string> temp;
	size_t minword = 0; 
	if (words.size() != 0)
	{
		for (size_t i = 1; i < words.size(); ++i)
		{
			if (words[0].size() > words[i].size())
			{
				minword = words[i].size();
			}
		}
		for (size_t i = 1; i < words.size(); ++i)
		{
			for (size_t j = 0; j < minword; ++j)
			{
				if (words[0].at(j) == words[i].at(j))
				{
					prefix += words[i].at(j);
				}
			}
			temp.push_back(prefix);
			prefix = "";

		}
		std::sort(temp.begin(), temp.end());
		prefix = temp[0];
	}
	else prefix = "";
return prefix;
}
int main()
{
	std::string prefix;
	std::vector <std::string> first = {};
	//std::vector <std::string> temp;

	//int minword=0;//надо минслово
	//for (size_t i = 1; i < first.size(); ++i)
	//{
	//	if (first[0].size() > first[i].size())
	//	{
	//		minword = first[i].size();
	//	}
	//}
	//
	//for (size_t i = 1; i < first.size(); ++i)
	//{
	//	for (size_t j = 0; j < minword; ++j)
	//	{
	//		if (first[0].at(j) == first[i].at(j))
	//		{
	//			prefix += first[i].at(j);
	//		}
	//	}
	//	temp.push_back(prefix);
	//	prefix = "";
	//	
	//}
	//std::sort(temp.begin(), temp.end());
	//prefix = temp[0];
	//CommonPrefix(first);
	std::cout << CommonPrefix(first) << std::endl;

	return 0;
}   