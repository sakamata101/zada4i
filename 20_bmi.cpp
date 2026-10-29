// Задача: Индекс массы тела
// Практика code review (2 курс)
// На что смотреть: магические пороги BMI; имена h/w/i; формула без скобок-ясности
// Файл: 20_bmi.cpp

#include <iostream>
using namespace std;
const double WEIGHT1 = 18.5;
const double WEIGHT2 = 25.0;
const double WEIGHT3 = 30.0;
int main() {
    double height, weight;
    cin >> height >> weight;
    double index = weight / (height * height);
    if (index < WEIGHT1) { 
        cout << "under_avg" << endl;
    } else if (index < WEIGHT2) { 
        cout << "avg" << endl;
    } else if (index < WEIGHT3) { 
        cout << "over_avg" << endl;
    } else {
        cout << "fatness" << endl;
    }
    return 0;
}
