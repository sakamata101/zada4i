// Задача: N-е число Фибоначчи
// Практика code review (2 курс)
// На что смотреть: плохо читаемые a/b/c; особые случаи размазаны
// Файл: 14_fibonacci_n.cpp

#include <iostream>

int main() {
    int user_number; 
    std::cin >> user_number;

    if (user_number < 1) {
        return 0; 
    }

    if (user_number == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }

    long long fib1 = 0; 
    long long fib2 = 1; 

    for (int i = 3; i <= user_number; i++) {
        long long sum = fib1 + fib2; 
        fib1 = fib2;           
        fib2 = sum;          
    }

    std::cout << fib2 << std::endl; 

    return 0;
}
