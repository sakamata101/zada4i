// Задача: Подсчёт чётных и нечётных
// Практика code review (2 курс)
// На что смотреть: непонятные счётчики; цикл с лишней переменной
// Файл: 04_even_odd_count.cpp

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int even_count = 0;
    int odd_count = 0;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    cout << even_count << " " << odd_count << endl;
    return 0;
}
