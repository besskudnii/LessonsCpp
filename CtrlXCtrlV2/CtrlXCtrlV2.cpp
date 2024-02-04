//Эта задача — продолжение предыдущей задачи Ctrl + X, Ctrl + V.В качестве основы вы можете взять код оттуда.
//Петя продолжает разработку своего текстового редактора.На этот раз добавилось еще одна операция :зажать клавишу Shift(Shift).
//Операции Up и Down при зажатой клавише Shift выделяют строки в текстовом редакторе.Если курсор находится на строке
//, то после операций Shift, Down, Down выделенными окажутся строки и .
//Операция Ctrl + X вырезает выделенные строки из файла в буфер.Операция Ctrl + V копирует строки из буфера, заменяя выделенные строки в файле.
//Операции Ctrl + X и Ctrl + V сбрасывают выделение после исполнения и отпускают клавишу Shift.
// Если при исполнении этих операций в файле не выделена ни одна строка, поведение должно соответствовать предыдущей задаче Ctrl + X, Ctrl + V.
//Формат ввода
//Программе на вход подаётся набор строк, разделённых переносом строки.Длина каждой строки не превышает 3000 символов.
// Последняя строка в файле является пустой.Она означает завершение ввода файла.Других пустых строк в файле быть не может.
//После этого и до окончания ввода программе подаются команды Down, Up, Ctrl + X, Ctrl - V, Shift.
//Формат вывода
//Выведите получившийся файл построчно.


#include <iostream>
#include <string>
#include <list> 
#include <iterator>  

int main()
{
    
    std::list<std::string> list;
    std::list<std::string> bufferList;
    std::string string, buffer;
    std::string operation;
    auto it = list.begin(); //курсор-итератор
    while (true)
    {

        std::getline(std::cin, string);

        if (string.empty())
        {
            break;
        }

        list.push_back(string);
    }
    
    while (std::cin >> operation)
    {
       if (operation == "Down")
        {
            if (it == list.end()) 
            {
                continue;
            }
            ++it;
        }

        else if (operation == "Up")
        {
            if (it == list.begin())
            {
                continue;
            }
            --it;
        }
        else if (operation == "Shift")
       {
           if (it == list.begin())
           {
               continue;
           }
           buffer = *it;
           auto iterBegin = *it;
          //iterEnd;
       }
        else if (operation == "Ctrl+X")
        {
           bufferList.clear();
            if (it == list.begin())
            {
                continue;
            }
            bufferList.push_back(*it);
            it = list.erase(it);
        }

        else if (operation == "Ctrl+V")
        {

            if (buffer.empty()) 
            {
                continue;
            }
        list.splice(it, bufferList);
              
           
        }
    }
    for (const auto &it : list)
    {
        std::cout << it << std::endl;
    }
    
}