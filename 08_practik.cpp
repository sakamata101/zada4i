// Задача: Перевод температуры
// Практика code review (2 курс)
// На что смотреть: магические 32 и 1.8; имена t1/t2; смешение float/double
// Файл: 08_temp_convert.cpp

#include <iostream>
using namespace std;

int main() {
    const double FAHRENHEIT_OFFSET = 32.0;
    const double FAHRENHEIT_TO_CELSIUS = 1.8;

    cout << "Введите температуру в Фаренгейтах: ";
    
    double fahrenheit = 0.0;
    if (!(cin >> fahrenheit)) {
        cout << "Ошибка: введено некорректное число!" << std::endl;
        return 1;
    }

    const double celsius = (fahrenheit - FAHRENHEIT_OFFSET) / FAHRENHEIT_TO_CELSIUS;

    cout << "Результат в Цельсиях: " << celsius << '\n';

    return 0;
}

