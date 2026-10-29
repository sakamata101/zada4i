// Задача: Минимум из трёх
// Практика code review (2 курс)
// На что смотреть: избыточная вложенность if; можно упростить
// Файл: 16_min_of_three.cpp

#include <iostream>

int main() {
    int firstNumber, secondNumber, thirdNumber;
    std::cin >> firstNumber >> secondNumber >> thirdNumber;

    int min_value = firstNumber;

    if (secondNumber < min_value) {
        min_value = secondNumber;
    }

    if (thirdNumber < min_value) {
        min_value = thirdNumber;
    }

    std::cout << min_value << std::endl;
    return 0;
}

