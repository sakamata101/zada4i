// Задача: Скидка в магазине
// Практика code review (2 курс)
// На что смотреть: магические проценты; повторяющиеся cout; неочевидные пороги
// Файл: 17_discount.cpp

#include <iostream>
using namespace std;

// Твои константы — это супер, оставляем их здесь
const double DISCOUNT1 = 5000.0;
const double DISCOUNT2 = 2000.0;
const double PERCENT1 = 0.15;
const double PERCENT2 = 0.1;

int main() {
    double price;
    cin >> price;
    double total_sum;

    if (price >= DISCOUNT1) {
        total_sum = price - price * PERCENT1;
    }
    else if (price >= DISCOUNT2) { 
        total_sum = price - price * PERCENT2;
    }
    else {
        total_sum = price;
    }
    cout << total_sum << endl;

    return 0;
}

