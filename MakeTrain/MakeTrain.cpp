//Вагоны
//Вы — машинист.Вам поручено реализовать функцию void MakeTrain(), чтобы сформировать поезд из набора вагонов. У каждого вагона есть номер(помещается в int).
//Номера вагонов внутри состава могут повторяться. Изначально путь, на котором формируется состав, пустой.
//Вы должны уметь выполнять следующие команды, которые поступают в отдельных строках на входе :
//+left W — добавить вагон с номером W слева 
//+ right W — добавить вагон с номером W справа 
//- left N — отцепить и убрать N вагонов слева 
//- right N — отцепить и убрать N вагонов справа
//В последних двух командах N может быть больше текущей длины состава — в этом случае надо убрать весь состав целиком.
//Отцеплять вагоны по одному может быть долго : постарайтесь сразу отцеплять по N штук.
//Напечатайте через пробел номера вагонов получившегося состава, если смотреть на них слева направо.В самом конце напечатайте перевод строки.
//На вход подаются строки с командами в указанном формате.Всего будет не более 1 млн команд.
//Оформите ваше решение в функции void MakeTrain().
//Эта функция должна читать данные со стандартного потока ввода и печатать их в стандартный поток вывода.
//Подключите все необходимые библиотеки.В вашем решении не должно быть функции main.

//+left 1
//+right 2
//+left 3
//-right 1
 
//3 1

#include <iostream>
#include <string>
#include <list>
#include <array>
#include <iterator>
 
void main()
{
    std::list<int> Wagons;
    std::string Operation;
    int NumberWagon;
    std::cin >> Operation >> NumberWagon;  

        if (Operation == "-left") 
        {
            auto WagonBegin = Wagons.begin();
            auto WagonEnd = Wagons.begin();     
            std::advance(WagonEnd, NumberWagon);
            Wagons.erase(WagonBegin, WagonEnd);
        }
        else if (Operation == "+left")
        {
            Wagons.push_front(NumberWagon);
        }
        else if (Operation == "-right")
        {
           auto WagonBegin = Wagons.end();
           std::advance(WagonBegin, -NumberWagon);
           Wagons.erase(WagonBegin, Wagons.end());
        }
        else if (Operation == "+right")
        {
            Wagons.push_back(NumberWagon);
        }
    for (auto Number : Wagons)
    {
        std::cout << Number << ' ';
    }
    std::cout << std::endl;
}