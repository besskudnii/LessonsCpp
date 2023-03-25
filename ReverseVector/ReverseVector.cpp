
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::string word;
	std::vector<std::string> words, sort;
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