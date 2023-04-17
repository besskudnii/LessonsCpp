#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//Напишите функцию для вычисления наибольшего общего префикса строк, переданных в векторе words:
//std::string CommonPrefix(const std::vector<std::string>& words);
//Например, для пустого вектора функция должна вернуть пустую строку, а для вектора из строк "apple", "apricot" и "application" — строку "ap".
//Примечание
//В решении не должно быть функции main : она будет в нашей тестирующей программе.Подключите необходимые библиотеки и напишите код функции CommonPrefix.


std::string CommonPrefix(std::vector<std::string>& words) 
{
	if (words.empty()) 
	{
		return "";
	}
	std::string prefix = words[0];
	for (size_t i = 1; i < words.size(); i++) 
	{
		while (words[i].find(prefix) != 0) 
		{
			prefix.pop_back(); 
			if (prefix.empty())
			{
				return "";
			}
		}
	}
	return prefix;
}

std::string longCommonPrefix(std::vector<std::string>& words) 
{
	if (words.empty())
	{
		return "";
	}
	std::string prefix = words[0];
	for (int i = 1; i < words.size(); i++) 
	{
		int j = 0;
		while (j < prefix.size() && j < words[i].size() && prefix[j] == words[i][j]) 
		{
			j++;
		}
		prefix = prefix.substr(0, j);
	}
	return prefix;
}

std::string CommonPrefix2(const std::vector<std::string>& words) 
{
	std::string prefix = "";
	std::vector <std::string> temp;
	size_t wordsum = words.size();

	if (words.empty())
	{
		return prefix;
	}

	size_t minword = words[0].length();
	for (size_t i = 1; i < wordsum; ++i)
	{
		if (minword > words[i].length())
		{
			minword = words[i].length();
		}
	}
	for (size_t i = 0; i < minword; ++i)
	{
		char c = words[0][i];
		 for (size_t j = 1; j < wordsum; ++j)
		{
			if (words[j][i] != c)
			{
				 return prefix;
			}
		}

	}
	for (size_t i = 1; i < wordsum; ++i)
	{
		for (size_t j = 0; j < minword; ++j)
		{
			if (words[0][j] == words[i][j])
			{
				prefix += words[i][j];
			}
		}
		temp.push_back(prefix);
		prefix = "";
	}	 
	auto pointprefix = std::min_element(temp.begin(), temp.end());
	prefix = *pointprefix;
	return prefix;
}


int main()
{
	std::string test = "first[0]";
	std::cout << test.find("rst") <<std::endl;


	std::vector <std::string> first = { "apple", "application", "apsolute", "apricot", "apply", "aproch" };
	std::string prefix = first[0]; 
	size_t wordsum = first.size();
	std::cout << "prefix" << "\t" << prefix << std::endl;
	std::cout << "wordsum" << "\t" << wordsum << std::endl;
	if (first.empty())
		{
			prefix = "";
		}
	
		for (int i = 1; i < wordsum; i++)
		{
			std::cout << i << std::endl;
			while (first[i].find(prefix) != 0)
			{
			prefix.pop_back();
				/*	std::cout << "first[i] " << "\t" << first[i] << std::endl;
				std::cout << "first[i].find(prefix) " << "\t" << first[i].find(prefix) << std::endl;
				std::cout << "prefix " << "\t" << prefix << std::endl;
				std::cout << "prefix.length() " << "\t" << prefix.length() << std::endl;*/

				if (prefix.empty())
				{
					prefix = "";
				}
			}
		}
	prefix;
	

	//my decision
	//if (first.empty())
	//{
	//	prefix = "";// return prefix;
	//}
	//size_t minword = first[0].length();
	//for (size_t i = 1; i < wordsum; ++i)
	//{
	//	if (minword > first[i].length())
	//	{
	//		minword = first[i].length();
	//	}
	//}
	//for (size_t i = 0; i < minword; ++i)
	//{
	//	char c = first[0][i];
	//	for (size_t j = 1; j < wordsum; ++j)
	//	{
	//		if (first[j][i] != c)
	//		{
	//			break;// return prefix;
	//		}
	//	}
	//}
	//for (size_t i = 1; i < wordsum; ++i)
	//{
	//	for (size_t j = 0; j < minword; ++j)
	//	{
	//		if (first[0][j] == first[i][j])
	//		{
	//			prefix += first[i][j];
	//		}
	//	}
	//	temp.push_back(prefix);
	//	prefix = "";

	//}
	//auto prefixx = std::min_element(temp.begin(), temp.end());
	//prefix = *prefixx;
	//CommonPrefix(first);
	// 
	// 
//	std::cout << longestCommonPrefix(first) << std::endl;
	std::cout << CommonPrefix(first) << std::endl;

	
}
	  