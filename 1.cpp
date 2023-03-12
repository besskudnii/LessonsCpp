
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//void StringReverse(char* ss)
//{
//int StringCount = 0;
//while (ss[StringCount] != '\0') StringCount++;
//for (int i = 0, StringEnd = StringCount - 1; i < StringEnd; ++i, --StringEnd)
//{
//	StringSwap(ss[i], ss[StringEnd]);
//	}

//std::vector<std::string> ReverseVector(std::vector<std::string> example)
//{
//
//	std::sort(example.end(), example.begin());
//			//for (int i = 0; i < example.size(); ++i)
//			//	std::string temp = example.at(i);
//			//example.at(i) = example.at(example.size() - i);
//			//example.at(example.size() - i) = temp;
//	return example;
//}
int main()
{
	std::string word;
	std::vector<std::string> words;
	while (std::getline(std::cin, word))
	{
	words.push_back(word);
	}
	std::sort(words.rbegin(), words.rend());
	for (std::string elem : words)
	{
		std::cout << elem << std::endl;
	}

	return 0;
}

