// Задача: Подсчёт цифр в числе
// Практика code review (2 курс)
// На что смотреть: цикл while неочевиден; изменение входного значения; имя cnt
// Файл: 10_count_digits.cpp

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Введите число: ";
    cin >> x;

    int digitCount = 0;

    int temp;
    if (x < 0) {
        temp = -x;
    } else {
        temp = x; 
    }

    do {
        temp = temp / 10;
        digitCount++;
    } while (temp > 0);

    cout << "Количество цифр: " << digitCount << '\n';

    return 0;
}

