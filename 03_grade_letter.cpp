// Задача: Оценка по баллам
// Практика code review (2 курс)
// На что смотреть: лестница if без else if; магические пороги; копипаста сообщений
// Файл: 03_grade_letter.cpp

#include <iostream>
using namespace std;

int main() {
    const int threshold_A = 90;
    const int threshold_B = 80;
    const int threshold_C = 70;
    const int threshold_D = 60;
    int ball;
    cin >> ball;
    char grade;
    if (ball >= threshold_A) grade = 'A';
    else if (ball >= threshold_B) grade = 'B';
    else if (ball >= threshold_C) grade = 'C';
    else if (ball >= threshold_D) grade = 'D';
    else grade = 'F';
    cout << grade;
    return 0;
}
