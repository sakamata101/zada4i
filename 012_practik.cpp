// Задача: Високосный год
// Практика code review (2 курс)
// На что смотреть: сложное условие в одну строку; нет пояснения правила
// Файл: 12_leap_year.cpp

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Введите год: ";
    cin >> year;

    bool isDivisibleBy4 = (year % 4 == 0);
    bool isDivisibleBy100 = (year % 100 == 0);
    bool isDivisibleBy400 = (year % 400 == 0);

    bool isLeapYear = isDivisibleBy400 || (isDivisibleBy4 && !isDivisibleBy100);

    if (isLeapYear) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    return 0;
}

