// Задача: Факториал числа
// Практика code review (2 курс)
// На что смотреть: нет проверки диапазона; имя f; смешение ++ и =
// Файл: 05_factorial.cpp

#include <iostream>
using namespace std;

int main(){
  int num;
  if(!(cin >> num)){;
    cout << "Введите число";
    return 1;
  }

  if(num < 0){
    cout << "Число не может быть отрицательным";
    return 1;
  }

  if(num > 20){
    cout << "Ошибка число слишком большое";
    return 1;
  }

  long double fact = 1;
  for(int i = 2; i <= num ; ++i){
    fact *= i;
  }
  cout << fact << endl;
  return 0;
}
