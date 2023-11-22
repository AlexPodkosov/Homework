// Программа на C++, которая запрашивает у пользователя ввод количества и выводит последовательность символов от '0' до 'Z'.
// Если символ достигает 'Z', программа возвращает его к начальному значению '0' и продолжает выводить символы.

#include<iostream>
#include<clocale>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int count;
    cout <<"Введите количество: ";
    cin>>count;
    char a = '0';

    while(count > 0) {
        cout << a;
        count = count - 1;
        a++;
        if(a == 'Z') {
            a = '0';
        }
    }
    return 0;
}