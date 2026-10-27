// Задача: Факториал числа
// Практика code review (2 курс)
// На что смотреть: нет проверки диапазона; имя f; смешение ++ и =
// Файл: 05_factorial.cpp

#include <iostream>
using namespace std;

int main(){
  int n; cin>>n;
  int f=1;
  for(int i=1;i<=n;++i){
    f=f*i;
  }
  cout<<f<<endl;
  return 0;
}
