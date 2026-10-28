// Задача: Меню калькулятора
// Практика code review (2 курс)
// На что смотреть: длинный switch без default-логики; повтор вывода; плохие имена
// Файл: 09_menu_calc.cpp

#include <iostream>
using namespace std;

int main() {
    int op;
    double firstNum, secondNum;

    cout << "Выберите операцию (1 - +, 2 - -, 3 - *, 4 - /): ";
    cin >> op;
    
    cout << "Введите два числа: ";
    cin >> firstNum >> secondNum;

    switch (op) {
        case 1:
            cout << firstNum + secondNum << "\n";
            break;
        case 2:
            cout << firstNum - secondNum << "\n";
            break;
        case 3:
            cout << firstNum * secondNum << "\n";
            break;
        case 4:
            if (secondNum != 0) {
                cout << firstNum / secondNum << "\n";
            } else {
                cout << "Ошибка: деление на ноль" << "\n";
            }
            break;
        default:
            cout << "Ошибка: неверная операция" << "\n";
            break;
    }

    return 0;
}

