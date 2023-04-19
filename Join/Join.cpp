#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//Вам требуется написать функцию Join со следующим заголовком :
//std::string Join(const std::vector<std::string>& tokens, char delimiter);
//Функция должна вернуть строку, полученную склейкой элементов вектора через указанный разделитель.Например, Join({ "What", "is", "your", "name?" }, '_') 
// должна вернуть строку "What_is_your_name?".
//Примечание
//Если вектор tokens пустой, то функция должна вернуть пустую строку.Если в векторе tokens ровно один элемент, то он и должен вернуться в ответе.
//Подключите необходимые заголовочные файлы и напишите только код функции Join.Мы скомпилируем решение с нашей функцией main.


std::string Join(const std::vector<std::string>& tokens, char delimiter)
{
	std::string	Join = "";
	if (!tokens.empty())
	{
		for (size_t i = 0; i < tokens.size(); ++i)
		{
			if (i > 0) 
			{
				Join += delimiter;
			}
			Join += tokens[i];
		}
		
	}
	return Join;
}

int main()
{
	std::vector<std::string> tokens = { "help", "me", "please" };
	char delimiter = '_';
	//std::string	Join = "";
	//if (!tokens.empty())
	//{
	//	for (size_t i = 0; i < tokens.size(); i++)
	//	{
	//		Join += tokens[i] + delimiter;
	//	}
	//	Join.pop_back();
	////	std::cout << Join << std::endl;  //return Join;
	//}


	//if (!tokens.empty())
	//{
	//	for (auto i : tokens)
	//	{
	//		Join += i + delimiter;
	//	}
	//	Join.pop_back();
	//	//	std::cout << Join << std::endl;  //return Join;
	//}


		std::cout << Join(tokens, delimiter) << std::endl;
 	 
		//return Join;
	
}
	  