#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/* Известный алгоритм Soundex определяет, похожи ли два английских слова по звучанию. На вход он принимает слово и заменяет его на некоторый четырёхсимвольный код. Если коды двух слов совпадают, то слова, как правило, звучат похоже.
Вам требуется реализовать этот алгоритм. Он работает так:
Первая буква слова сохраняется.
В остальной части слова буквы a, e, h, i, o, u, w и y удаляются;
Оставшиеся буквы заменяются на цифры от 1 до 6, причём похожим по звучанию буквам соответствуют одинаковые цифры:
b, f, p, v: 1
c, g, j, k, q, s, x, z: 2
d, t: 3
l: 4
m, n: 5
r: 6

Любая последовательность идущих подряд одинаковых цифр сокращается до одной такой цифры.
Итоговая строка обрезается до первых четырёх символов.
Если длина строки получилась меньше четырёх символов, в конце добавляются нули.
Примеры:
аmmonium → ammnm → a5555 → a5 → a500.
implementation → implmnttn → i51455335 → i514535 → i514.*/

void DeleteCharFromString(std::string& text, const std::string& vars)
{
	for (char ch : vars)
	{
		text.erase(std::remove(text.begin(), text.end(), ch), text.end());
	}
}

void ChangeCharToDigit(std::string& str, const std::string& chars, char number)
{
	for (auto it = str.begin(); it != str.end(); ++it)
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
	std::string String = "test12tbakerhtiqotutwty";

	std::string Soundex;

	if (String.empty())
		return;

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

	Buffer.erase(4);
	for (int i = Buffer.size(); i < 4; ++i)
	{
		Buffer.push_back('0');
	}

	Soundex += Buffer;
	std::cout << Soundex << std::endl;
}