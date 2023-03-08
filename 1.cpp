
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> ReverseVector(std::string& example)
{

}
int main()
{
	std::string word;
	std::vector<std::string> words;
	while (std::getline(std::cin, word))
	{
	words.push_back(word);
	if (words.back() == "") break;
	}
	words.pop_back();
	//int i = 1;
	for (std::string elem : words)
	{
		
		std::cout << elem << std::endl;
	}
	//std::cout << ;

	return 0;
}

