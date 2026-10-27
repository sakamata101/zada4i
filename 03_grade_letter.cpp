// Задача: Оценка по баллам
// Практика code review (2 курс)
// На что смотреть: лестница if без else if; магические пороги; копипаста сообщений
// Файл: 03_grade_letter.cpp

#include <iostream>
using namespace std;

int main() {
    int ball;
    cin >> ball;
    if (ball >= 90) cout << "A" << endl;
    if (ball >= 80 && ball < 90) cout << "B" << endl;
    if (ball >= 70 && ball < 80) cout << "C" << endl;
    if (ball >= 60 && ball < 70) cout << "D" << endl;
    if (ball < 60) cout << "F" << endl;
    return 0;
}
