#include <iostream>
#include <string>
#include <algorithm>

void DeleteCharFromString(std::string& text, const std::string& vars)
{
	for (char ch : vars)
	{
		text.erase(std::remove(text.begin(), text.end(), ch), text.end());
	}
}

void ChangeCharToDigit(std::string& str, const std::string& chars, char number)
{
	for (auto it = str.begin(); it != str.end(); ++it) //непонятно
	{
		if (chars.find(*it) != std::string::npos)
		{
			*it = number;
		}
	}
}

void RemoveDublicateDigits(std::string& str)
{
	auto eraseIt = std::unique(str.begin(), str.end(), [](char left, char right)
		{
			return left == right && (left == '1' || left == '2' || left == '3' || left == '4' || left == '5' || left == '6');
		});
	str.erase(eraseIt, str.end());
}

int main()
{

	std::string String, Soundex;
	std::cin >> String;
	if (String.empty())
		return 0;

	Soundex += String.front();

	std::string& Buffer = String;
	Buffer.erase(0, 1);

	DeleteCharFromString(Buffer, "aehiouwy");

	ChangeCharToDigit(Buffer, "bfpv", '1');
	ChangeCharToDigit(Buffer, "cgjkqsxz", '2');
	ChangeCharToDigit(Buffer, "dt", '3');
	ChangeCharToDigit(Buffer, "l", '4');
	ChangeCharToDigit(Buffer, "mn", '5');
	ChangeCharToDigit(Buffer, "r", '6');

	RemoveDublicateDigits(Buffer);

	if (Buffer.size() > 3) Buffer.erase(3);
	else
	{
		for (size_t i = Buffer.size(); i < 3; ++i)
		{
			Buffer.push_back('0');
		}
	}
	Soundex += Buffer;
	std::cout << Soundex << std::endl;

}