// Задача: Среднее арифметическое массива
// Практика code review (2 курс)
// На что смотреть: фиксированный размер 5 без константы; int-сумма и деление
// Файл: 11_array_avg.cpp

#include <iostream>
using namespace std;
const int SIZE = 5;
int main() {
    int array[SIZE];
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        cin >> array[i];
        sum = sum + array[i];
    }
    cout << (double)sum / SIZE << endl;
    return 0;
}
