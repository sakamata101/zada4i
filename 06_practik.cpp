// Задача: Проверка простого числа
// Практика code review (2 курс)
// На что смотреть: глубокая вложенность; флаг flag; неочевидная логика
// Файл: 06_is_prime.cpp

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    if (number <= 1) {
        cout << "not" << endl;
        return 0;
    }

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            cout << "not" << endl;
            return 0;
        }
    }
    
    cout << "prime" << endl;
    return 0;
}


