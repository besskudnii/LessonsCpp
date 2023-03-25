#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool IsItPalindrome(std::string& example)
{
	if (example != "")
	{
		for (size_t first = 0, last = example.length() - 1; first <= example.size() / 2; ++first, --last)
		{
			if (example[first] != example[last]) { return false; }
		}
	}
	return true;
}

int main()
{
	std::string String = "";
	std::getline(std::cin, String);
	String.erase(std::remove(String.begin(), String.end(), ' '), String.end());
	if ((String == "") || IsItPalindrome(String))
	{
		std::cout << "YES" << std::endl;
	}
	else std::cout << "NO" << std::endl;
	return 0;
}