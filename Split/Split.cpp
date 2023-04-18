#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//Вам требуется написать функцию со следующим заголовком :
//std::vector<std::string> Split(const std::string& str, char delimiter);
//Функция должна вернуть вектор строк, полученный разбиением строки str на части по указанному символу - разделителю delimiter.Если разделитель встретился в начале или в конце строки str, то в начале(соответственно, в конце) вектора с результатом должна быть пустая строка.Если два разделителя встретились рядом, то пустая строка между ними тоже должна попасть в ответ.Для пустой строки надо вернуть пустой вектор.
//Например, Split("What_is_your_name?", '_') должна вернуть вектор из строк What, is, your и name ? .


std::vector<std::string> split(const std::string& str, char delimiter)
{
	std::string temp;
	std::vector<std::string> result;
	size_t StringLength = str.length();
	if (str.empty())
	{
		return result;
	}

	for (size_t i = 0; i <= StringLength; ++i)
	{
		if (str[i] != delimiter && i != StringLength)
		{
			temp += str[i];
		}
		else if (str[i] == delimiter || i == StringLength)
		{
			result.push_back(temp);
			temp = "";
		}

	}
	return result;
}

int main()
{
	 
	std::string ss = "13-24--08-11-2014";
	std::string temp;
	char cc = '-';
 	std::vector<std::string> vv; 
	size_t StringLength = ss.length();
	if (ss.empty())
		{
		std::cout << "pusto"; //return "";
		}
	
		for (size_t i = 0; i <= StringLength; ++i)
		{
			if (ss[i] != cc && i != StringLength)
			{
				temp += ss[i];
			}
			else if (ss[i] == cc || i == StringLength)
			{
				//vv.push_back(temp);
				std::cout << temp << std::endl;
				temp = "";
			}
			
			//
			//temp = "";
		//	std::cout << ss[i] << std::endl;
		/*	size_t pos1 = ss.find('_');
			std::cout << pos1 << std::endl;*/

			// подстрока "string" из 6 символов начиная с 5-й позиции
		//	std::string sub1 = s.substr(5, 6);
			// подстрока "functions" с 12-й позиции и до конца
			//std::string sub2 = s.substr(12);
		

		//if (ss[i] == cc)
		//	{
		//	vv.push_back(ss.substr())
		//	//std::cout << ss.find(cc, i) << std::endl;
		//	
		//	//	std::cout << temp << std::endl;
		//	temp = "";
		//	}
			
		//
		//std::cout << temp << std::endl;
		/*vv.push_back(temp);
		temp = "";*/

		} 
	

	 
		return 0;
	
}
	  