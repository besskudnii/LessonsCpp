﻿//Проверка работ
//В университете проводится письменная контрольная работа.
//N студентов сдают свои работы в общую стопку, причем некоторые кладут свою работу сверху, а другие(считая, что чем позже их работу проверят, тем лучше) — снизу.
//Проверяются работы в том порядке, в котором лежат, начиная с верхней.Определите, чья работа будет проверена k - й по счёту.
//
//Формат ввода
//Первая строка содержит одно натуральное число N, не превосходящее 10000, — число студентов.
//Каждая из последующих N строк содержит фамилию студента — строку из латинских букв длиной от 2 до 10 символов, 
//и через пробел слово top или bottom — положил этот студент свою работу сверху или снизу.
//Следующая строка содержит одно целое число M от 0 до 10000 — для какого числа работ нужно определить их автора.
//Следующие M строк содержат по одному числу x i от 1 до N — номер в стопке очередной интересующей нас работы.
//
//Формат вывода
//Выведите M строк.В i - й строке выведите фамилию студента, чья работа будет проверена x i - й по счёту.



 
#include <iostream>
#include <string>
#include <deque>
#include <array>

 
int main()
{
    std::deque<std::string> first;
    size_t N;
    std::cin >> N;
    while (N > 0)
    {
        std::string name, sequence;
        std::cin >> name >> sequence;
        if (sequence == "top")
        {
            first.push_front(name);
        }
        else
        {
            first.push_back(name);
        }
        --N;
    }

    int M;
    std::cin >> M;
    for (int i = 0; i < M; ++i) 
    {
        size_t IndexStudent;
        std::cin >> IndexStudent;
        std::cout << first[IndexStudent - 1] << std::endl;
    }
}