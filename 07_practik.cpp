// Задача: Таблица умножения
// Практика code review (2 курс)
// На что смотреть: магическое 10; вложенные циклы без пояснений; вывод в одну кучу
// Файл: 07_mult_table.cpp

#include <iostream>
using namespace std;

int main() {
const int MAX_SIZE = 10;
    for (int i = 1; i <= MAX_SIZE; i++) {
        for (int j = 1; j <= MAX_SIZE; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
