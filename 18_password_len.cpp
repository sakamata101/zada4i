// Задача: Проверка длины пароля
// Практика code review (2 курс)
// На что смотреть: магические 8 и 16(исправлено); сравнение char-массива посимвольно вручную почти
// Файл: 18_password_len.cpp

#include <iostream>
#include <cstring>
using namespace std;
const int MINIMUM_PASSWORD_LENGTH = 8;
const int MAXIMUM_PASSWORD_LENGTH = 16;
int main() {
    char password[100];
    cin.getline(password, 100);

    int length = strlen(password);

    if (length < MINIMUM_PASSWORD_LENGTH){
         cout << "short" << endl;
    } else if (length > MAXIMUM_PASSWORD_LENGTH){ 
        cout << "long" << endl;
    } else {
        cout << "ok" << endl;
    }
    return 0;
}
