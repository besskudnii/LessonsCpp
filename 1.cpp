#include <iostream>
#include <string>
#include <vector>

/*шаблон функции меняет любые типы местамги*/

//template <typename string>
//string swaper(string a)
//{
//	j = strlen(a);
//	for (int i = 0; i < strlen(a)/strlen(a[1]); ++i)
//	{
//	string temp[j] = a;
//	a = b;
//	b = temp;
//	if a[i] == " "
//		break;
//	}
//return 0;
//
//}
//int main()
//{
//	int a;
//	int b;
//
//	std::cin >> a;
//	std::cin >> b;
//std::cout << "a = " << a << std::endl;
//std::cout << "b = " << b << std::endl;
//swaper(a, b);
//std::cout << "swap" << std::endl;
//std::cout << "a = " << a << std::endl;
//std::cout << "b = " << b << std::endl;
//}
 
//int swaper(int *pa, int *pb)
//{
//	int temp = 0;
//
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//   std::cin >> a >> b;
//std::cout << "a = " << a << std::endl;
//std::cout << "b = " << b << std::endl;
//swaper(&a, &b);
//std::cout << "swap" << std::endl;
//std::cout << "a = " << a << std::endl;
//std::cout << "b = " << b << std::endl;
//}

//#include <iostream>
//
//using namespace std;
//int main() {
//    int n, k;
//    std::cin >> n >> k;
//
//    int dayofweek = n;
//
//    for (int i = 1; i < n; ++i) {
//        std::cout << "   ";
//    }
//
//    for (int day = 1; day <= k; ++day) {
//        if (day < 10) {
//            std::cout << " ";
//        }
//
//        std::cout << day;
//
//        if (dayofweek == 7) {
//            std::cout << "\n";
//            dayofweek = 1;
//        }
//        else {
//            std::cout << " ";
//            dayofweek += 1;
//        }
//    }
//
//    if (dayofweek != 1) {
//        std::cout << "\n";
//    }
//}
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, k, j;
//    cin >> k >> n;
//    for (j = 1; j < k; j++)
//        cout << "   ";
//    for (int i = 1; i <= n; i++)
//    {
//        if ((i + k) < 10)
//        {
//            cout << " " << i << " ";
//        }
//
//        else if (i < 10)
//        {
//            cout << " " << i << " ";
//        }
//        else
//        {
//            cout << i << " ";
//        }
//        if ((i + k - 1) % (7) <= 0)
//        {
//            cout << " " << endl;
//        }
//    }
//}

//
//#include <iostream>
//#include <cmath>
//int main()
//{
//	int x1, y1, x2, y2;
//std::cin >> x1 >> y1 >> x2 >> y2;
//	if (abs(x2 - x1) - abs(y2 - y1) == 0)
//		std::cout << "YES\n";
//	else if (x2 - x1 == 0)
//		std::cout << "YES\n";
//	else if (y2 - y1 == 0)
//		std::cout << "YES\n";
//	else
//		std::cout << "NO\n";
//}

/*int main() 
{
	char* ptr = new char[30];
	for (int i = 0; i < 30; i++)
	{

		ptr[i] = 'а';

	}
	std::cout << ptr;
	delete[] ptr;

}*/

//#include <iostream>                        
//
//int main()
//{
//	std::string ss;
//	int kpr = 0, k = 0, size = 1;
//	char* word = new char[size]; 
//	setlocale(LC_ALL, "ru");
//	ss = "Мама мыла раму";
////	std::cout << ss << std::endl << ss.length() << std::endl;
//	for (int i = 0; i < ss.length(); ++i)
//	{
//		kpr++;	//счетчик количества символов
//	}
//	std::cout << "Ввели строку " << ss << " и содержит " << kpr << " символов\n";
//	size = kpr + 1;
//	std::cout << "Перевернул строку полностью\n";
//	for (int i = 0; kpr >= 0; --kpr, ++i)
//	{
//		std::cout << ss[kpr];
//		word[i] = ss[kpr]; //в массив сохранил перевернутое предложение
//	}
//	//for (int i = 0; i < size; ++i)
//	//{
//	//	std::cout << word[i]; //	проверка заполнения массива	
//	//}
//	std::cout << std::endl << "Реверс слов после переворота\n";
//
//	for (int i = 0, p = 0, k = 0; i <= size+1; ++i)
//	{
//		if (word[i] == ' ')
//		{
//		//	std::cout << i << std::endl;
//			
//			for (p = i; p > k; p--)
//			{
//				std::cout << word[p-1];
//			}
//			std::cout << " ";
//			k = i+1;
//		} 
//		else if (i == size)
//			for (p = size-1; p >= k; p--)
//			{
//			std::cout << word[p];
//			}
//	}
////	delete[] word;
//}



// Процедура переворачивает строку непосредственно в буфере
// Ограничение. Не использовать библиотечные функции.
// Пример.
// "Hello" -> "olleH" 

//void StringSwap(char& left, char& right);
//void StringReverse(char* ss);
//void WordReverse(char* ss);
//void SwapString(char& CharLeft, char& CharRight)  /*Процедура переворачивает строку непосредственно в буфере*/
//{
//	char temp = CharLeft;
//	CharLeft = CharRight;
//	CharRight = temp;
//}
//void StringReverse(char* ss)
//{
//int StringCount = 0;
//while (ss[StringCount] != '\0') StringCount++;
//for (int i = 0, StringEnd = StringCount - 1; i < StringEnd; ++i, --StringEnd)
//{
//	StringSwap(ss[i], ss[StringEnd]);
//	}
//std::cout << ss << std::endl;
//}
//
//void WordReverse(char* ss)
//{
//int StringCount = 0;
//while (ss[StringCount] != '\0') StringCount++;
//StringReverse(ss);
//for (int i = 0, SpaceLast = 0, ii = 0, WordBegin = 0; i <= StringCount; ++i)
//{
//		if (ss[i] == ' ')
//		{
//			SpaceLast = i;
//			for (int temp = 0, StringEnd = i - 1, ii = WordBegin; ii < StringEnd; ++ii, --StringEnd)
//			{
//				StringSwap(ss[ii], ss[StringEnd]);
//				WordBegin = SpaceLast + 1;
//			}
//		}
//
//		else if (i == StringCount)
//		{
//			for (int ii = SpaceLast + 1, temp = 0, StringEnd = i - 1; ii < StringEnd; ++ii, --StringEnd)
//			{
//				StringSwap(ss[ii], ss[StringEnd]); 
//			}
//		}
//}
//std::cout << ss << std::endl;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	char string[] = "мама мыла раму";
////	StringReverse(string);
//	WordReverse(string);
//	return 0;
//}


/*Вычислите сумму цифр неотрицательного целого числа.*/

//#include <iostream>
//
//int main()
//{
//	int a, digits = 0, sum = 0;
//	std::cin >> a;
//  
//	/*while (a > 0)
//	{
//		
//		digits++;
//		a /= 10;
//	}
//	std::cout << digits << "\n" << a;*/
//
// 
// 
//
//	while (a>0)
//	{
//		sum = sum + a%10;
//		std::cout << "\t" << sum << "\n";
//
//		a = a/10;
//	}
//	std::cout << sum << "\n";
//
//}
//
//		
 


/*Нарисовать календарь.*/
	//int main()
	//{
	//	int n, k, j;
	//	std::cin >> k >> n;
	//	for (j = 1; j < k; j++)
	//		std::cout << "   ";
	//	for (int i = 1; i <= n; i++)
	//	{
	//		if ((i + k) < 10)
	//		{
	//			std::cout << " " << i << " ";
	//		}
	//		else if (i < 10)
	//		{
	//			std::cout << " " << i << " ";
	//		}
	//		else
	//		{
	//			std::cout << i << " ";
	//		}
	//		if ((i + k - 1) % (7) <= 0)
	//		{
	//			std::cout << " " << std::endl;
	//		}
	//	}
	//} 

 

/*Класс Human*/
//class Human
//{
//public:
//	int Age;
//	std::string Name;
//	double Weight;
//
//	void PrintHumanInfo()
//	{
//		std::cout << "Name of Human " << Name << std::endl << "Age: " << Age << std::endl << "Weight: " << Weight << std::endl;
//	}
//
//};
//
//int main()
//{
//	Human FirstHuman;
//	FirstHuman.Age = 37;
//	FirstHuman.Name = "Anton";
//	FirstHuman.Weight = 64.5;
//
//	FirstHuman.PrintHumanInfo();
//
//
//}

/* HumanКласс*/

//class Human
//{
//	
//public:
//	static int count;
//	Human (std::string FIO, int age)
//	{
//	this->FIO = FIO;
//	this->age = age;
//	count++;
//	ID = count;
//	}
//
//
//	int GetId()
//	{
//		return ID;
//	}
//
//private:
//	std::string FIO; 
//	int age;
//	int ID;
//}
//
//
//int Human::count = 0;
//
//int main()
//{
//	Human human1("Ivanov Ivan Ivanovich", 33);
//	Human human2("Ivanov Petr Ivanovich", 30);
//	Human human3("Ivanov Ivan Petrovich", 22);
//	Human human4("Petrov Ivan Ivanovich", 25);
//	std::cout  << human4.GetId() << std::endl;
//
//	return 0;
//
//}


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

//int main()
//{
//std::string password;
//int upperletter = 0, smallletter = 0, digits = 0, symbols = 0;
//std::getline(std::cin, password);
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
//			std::cout << "YES"  ;
//			}
//			else
//			{
//			std::cout << "NO"  ;
//			}
//	}
//else
//	{
//		std::cout << "NO"  ;
//	}
//return 0;
//}


/*Пароль от некоторого сервиса должен удовлетворять таким ограничениям :
есть дополнения от АА, написали класс и спец условия можно дополнять
состоять из символов таблицы ASCII с кодами от 33 до 126;
быть не короче 8 символов и не длиннее 14;
из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы — в пароле должны присутствовать не менее трёх любых.
Напишите программу, которая проверит, что введённый пароль подходит под эти ограничения*/




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

void DeleteCharFromString(std::string& text, const char& var)
{
	for (int i = 0; i <= text.size(); i++)
	{
		if (text[i] == var) { text.erase(text.begin() + i); }
	}
	
}

//void ChangeCharToDigit(std::string& text, const int& var)
//{
//	for (int i = 0; i <= text.size(); i++)
//	{
//		if (text[i] == var) { text.replace(i, var); }
//	}
//
//}

void ChangeCharToDigit(std::string& s, std::string const& toReplace, std::string const& replaceWith)
{
	std::string buffer;
	std::size_t position = 0;
	std::size_t prevPos;

	// Reserves rough estimate of final size of string.
	buffer.reserve(s.size());

	while (true) {
		prevPos = position;
		position = s.find(toReplace, position);
		if (position == std::string::npos)
			break;
		buffer.append(s, prevPos, position - prevPos);
		buffer += replaceWith;
		position += toReplace.size();
	}

	buffer.append(s, prevPos, s.size() - prevPos);
	s.swap(buffer);
}


int main()
{
	std::string String = "test12tbakerhtiqotutwty";
	std::string Soundex = "";
	//std::getline(std::cin, String);
	Soundex += String.front();
	
	std::string Buffer;
	Buffer = String.erase(0, 1);
	
	DeleteCharFromString(Buffer, 'a');
	DeleteCharFromString(Buffer, 'e');
	DeleteCharFromString(Buffer, 'h');
	DeleteCharFromString(Buffer, 'i');
	DeleteCharFromString(Buffer, 'o');
	DeleteCharFromString(Buffer, 'u');
	DeleteCharFromString(Buffer, 'w');
	DeleteCharFromString(Buffer, 'y');

//b, f, p, v: 1
//c, g, j, k, q, s, x, z: 2
//d, t: 3
//l: 4
//m, n: 5
//r: 6
	ChangeCharToDigit(Buffer, "b", "1");
	ChangeCharToDigit(Buffer, "f", "1");
	ChangeCharToDigit(Buffer, "p", "1");
	ChangeCharToDigit(Buffer, "v", "1");
	
	ChangeCharToDigit(Buffer, "c", "2");
	ChangeCharToDigit(Buffer, "g", "2");
	ChangeCharToDigit(Buffer, "j", "2");
	ChangeCharToDigit(Buffer, "k", "2");
	ChangeCharToDigit(Buffer, "q", "2");
	ChangeCharToDigit(Buffer, "s", "2");
	ChangeCharToDigit(Buffer, "x", "2");
	ChangeCharToDigit(Buffer, "z", "2");

	ChangeCharToDigit(Buffer, "d", "3");
	ChangeCharToDigit(Buffer, "t", "3");

	ChangeCharToDigit(Buffer, "l", "4");

	ChangeCharToDigit(Buffer, "m", "5");
	ChangeCharToDigit(Buffer, "n", "5");

	ChangeCharToDigit(Buffer, "r", "6");

	std::cout << Buffer << std::endl;
	std::cout << (Soundex += Buffer) << std::endl;


}