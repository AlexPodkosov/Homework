// Программа на C++, которая запрашивает у пользователя ввод 7 чисел и находит максимальное из них.
#include<iostream>
#include<clocale>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    
    int a;
    int max;
    int i=1;
    while(i < 8){ //определяем количество входов в цикл по переменной счетчика i
        cout<<"Введите число "<< i <<endl;
        cin>>a;
        if(i==1){
            max = a;
        }else{
            if(a>max){
                max = a;
            }
        }
        i++; //увеличиваем текущее значение на единицу (i = i + 1)
    }
    cout << "Max = " << max << endl;
    
    return 0;
}