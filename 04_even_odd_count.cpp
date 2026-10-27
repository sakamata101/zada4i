// Задача: Подсчёт чётных и нечётных
// Практика code review (2 курс)
// На что смотреть: непонятные счётчики; цикл с лишней переменной
// Файл: 04_even_odd_count.cpp

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c1 = 0;
    int c2 = 0;
    int k = 0;
    while (k < n) {
        int t;
        cin >> t;
        if (t % 2 == 0) {
            c1 = c1 + 1;
        } else {
            c2 = c2 + 1;
        }
        k = k + 1;
    }
    cout << c1 << " " << c2 << endl;
    return 0;
}
