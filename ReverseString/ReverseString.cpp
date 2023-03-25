#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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

void StringSwap(char& left, char& right);
void StringReverse(char* ss);
void WordReverse(char* ss);
void SwapString(char& CharLeft, char& CharRight)  /*Процедура переворачивает строку непосредственно в буфере*/
{
	char temp = CharLeft;
	CharLeft = CharRight;
	CharRight = temp;
}
void StringReverse(char* ss)
{
int StringCount = 0;
while (ss[StringCount] != '\0') StringCount++;
for (int i = 0, StringEnd = StringCount - 1; i < StringEnd; ++i, --StringEnd)
{
	StringSwap(ss[i], ss[StringEnd]);
	}
std::cout << ss << std::endl;
}

void WordReverse(char* ss)
{
int StringCount = 0;
while (ss[StringCount] != '\0') StringCount++;
StringReverse(ss);
for (int i = 0, SpaceLast = 0, ii = 0, WordBegin = 0; i <= StringCount; ++i)
{
		if (ss[i] == ' ')
		{
			SpaceLast = i;
			for (int temp = 0, StringEnd = i - 1, ii = WordBegin; ii < StringEnd; ++ii, --StringEnd)
			{
				StringSwap(ss[ii], ss[StringEnd]);
				WordBegin = SpaceLast + 1;
			}
		}

		else if (i == StringCount)
		{
			for (int ii = SpaceLast + 1, temp = 0, StringEnd = i - 1; ii < StringEnd; ++ii, --StringEnd)
			{
				StringSwap(ss[ii], ss[StringEnd]); 
			}
		}
}
std::cout << ss << std::endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	char string[] = "мама мыла раму";
//	StringReverse(string);
	WordReverse(string);
	return 0;
}


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


