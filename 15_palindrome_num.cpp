// Задача: Число-палиндром
// Практика code review (2 курс)
// На что смотреть: дублирование логики разворота; неочевидные имена
// Файл: 15_palindrome_num.cpp

#include <iostream>

int main() {
    int number;
    std::cin >> number;

    if (number < 0) {
        std::cout << "no" << std::endl;
        return 0;
    }

    long long reversed_number = 0;
    int remaining_digits = number;

    while (remaining_digits > 0) {
        int last_digit = remaining_digits % 10;
        reversed_number = reversed_number * 10 + last_digit;
        remaining_digits = remaining_digits / 10;
    }

    if (reversed_number == number) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}

