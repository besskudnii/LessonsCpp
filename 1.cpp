#include <iostream>
#include <vector>

int main()
{
	std::string word;
	std::vector<std::string> words;
	while (word != "/0")
	{
		std::cin >> word;
		words.push_back(word);
	}
	
	for (std::string elem : words)
	{
		std::cout << elem << std::endl;
	}
	//std::cout << ;

	return 0;
}