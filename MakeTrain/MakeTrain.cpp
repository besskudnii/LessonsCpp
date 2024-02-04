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
//
//#include <iostream>
//#include <string>
//#include <deque> 
//#include <iterator> 
// 
//void MakeTrain()
//{
//    std::deque<int> Train;
//    std::string operation;
//    size_t wagonNumber;
//    while (std::cin >> operation >> wagonNumber)
//    { 
//
//        if (operation == "-left") 
//        {
//            wagonNumber = std::min(wagonNumber, Train.size());
//            for (size_t i = 0; i < wagonNumber; ++i)
//            {
//                Train.pop_front();
//            }
//        }
//        else if (operation == "+left")
//        {
//            Train.push_front(wagonNumber);
//        }
//        else if (operation == "-right")
//        {
//            wagonNumber = std::min(wagonNumber, Train.size());
//           for (size_t i = 0; i < wagonNumber; ++i)
//           {
//               Train.pop_back();
//           }
//        }
//        else if (operation == "+right")
//        {
//            Train.push_back(wagonNumber);
//        }
//    }
//    for (const auto& number : Train)
//    {
//        std::cout << number << " ";
//    }
//    std::cout << std::endl;
//}

//
//void MakeTrain2()
//{
//    std::deque<int> Train;
//    std::string operation;
//    size_t wagonNumber;
//    while (std::cin >> operation >> wagonNumber)
//    {
//
//        if (operation == "-left")
//        {
//            wagonNumber = std::min(wagonNumber, Train.size());
//            auto wagonBegin = Train.begin();
//            auto wagonEnd = Train.begin();
//            std::advance(wagonEnd, wagonNumber);
//            Train.erase(wagonBegin, wagonEnd);
//        }
//        else if (operation == "+left")
//        {
//            Train.push_front(wagonNumber);
//        }
//        else if (operation == "-right")
//        {
//            wagonNumber = std::min(wagonNumber, Train.size());
//            auto wagonBegin = Train.end();
//            std::advance(wagonBegin, -wagonNumber);
//            Train.erase(wagonBegin, Train.end());
//        }
//        else if (operation == "+right")
//        {
//            Train.push_back(wagonNumber);
//        }
//    }
//    for (const auto& number : Train)
//    {
//        std::cout << number << " ";
//    }
//    std::cout << std::endl;
//}