/*Виртуальный метод делай
Называй bool testpassword
Складывай все классы в один массив std::vector
И потом беги по массиву и проверяй пароль
Захотели добавить новое условие проверки, реализовали новый класс добавили в этот массив и все
Код менять не пришлось, только расширять
Ничего не собирает в идеале класс должен заниматься только одной конкретной задачей
У нас он просто проверяет пароль
Мы ему передает передаем пароль и он возвращает прошла проверка или нет*/

/*Задача пароль*/

#include <iostream>
#include <string>
#include <vector>
int main()
{
std::string password;
int upperletter = 0, smallletter = 0, digits = 0, symbols = 0;
std::getline(std::cin, password);
if ((8 <= password.size()) && (password.size() <= 14))
	{
		for (int ch = 0; ch < password.size(); ch++)
		{
		if  ((33 <= password[ch]) && (password[ch] <= 126))			
			{					
			if ((password[ch] >= 'A') && (password[ch] <= 'Z')) { upperletter=1; }
			else if ((password[ch] >= 'a') && (password[ch] <= 'z')) { smallletter=1; }
			else if ((password[ch] >= '0') && (password[ch] <= '9')) { digits=1; }
			else { symbols=1; }
			}
		}
		if (digits + smallletter + upperletter + symbols >= 3)
			{
			std::cout << "YES"  ;
			}
			else
			{
			std::cout << "NO"  ;
			}
	}
else
	{
		std::cout << "NO"  ;
	}
return 0;
}


/*Пароль от некоторого сервиса должен удовлетворять таким ограничениям :
есть дополнения от АА, написали класс и спец условия можно дополнять
состоять из символов таблицы ASCII с кодами от 33 до 126;
быть не короче 8 символов и не длиннее 14;
из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы — в пароле должны присутствовать не менее трёх любых.
Напишите программу, которая проверит, что введённый пароль подходит под эти ограничения*/


//
//
//class Password
//{
//public:
//
//bool CheckPassword(const std::string& password) const 
//{
//int upperletter = 0, smallletter = 0, digits = 0, symbols = 0;
//if ((8 <= password.size()) && (password.size() <= 14))
//	{
//		for (int ch = 0; ch < password.size(); ch++)
//		{
//		if  ((33 <= password[ch]) && (password[ch] <= 126))			
//			{					
//			if ((password[ch] >= 'A') && (password[ch] <= 'Z')) { upperletter=1; }
//			else if ((password[ch] >= 'a') && (password[ch] <= 'z')) { smallletter=1; }
//			else if ((password[ch] >= '0') && (password[ch] <= '9')) { digits=1; }
//			else { symbols=1; }
//			}
//		}
//		if (digits + smallletter + upperletter + symbols >= 3)
//			{
//			return true;
//			}
//			else
//			{
//			return false;
//			}
//	}
//else
//	{
//	return false;
//	}
//}
//
//	
//private:
//
//};
//
////void main()
//int main()
//{
//std::string text = "test12T";
////std::getline(std::cin, text);
//Password password;
//
//std::vector<Password*> example;
//example.push_back(&password);
//
//for (const Password *i : example)
//	{
//	if ((*i).CheckPassword(text))
//		{
//		std::cout << "NO";
//		return true;
//		}
//	}
//std::cout << "YES";
//return true;
//}