// Задача: Число дней в месяце
// Практика code review (2 курс)
// На что смотреть: длинный список if; год не учитывается для февраля аккуратно
// Файл: 19_days_in_month.cpp

#include <iostream>
using namespace std;

int main() {
    int month, year;
    cin >> month >> year;

    if (month < 1 || month > 12) {
        return 0;
    }

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << 30;
            break;
        case 2:
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                cout << 29;
            } else {
                cout << 28;
            }
            break;
    }

    cout << endl;
    return 0;
}

