// Задание 1. Найти среднее значение чисел.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    
    cout << "Enter a :";
    cin >> a;

    cout << "Enter b :";
    cin >> b;

    cout << "Enter c :";
    cin >> c;

    int Srednee_znachenie = (a + b + c) / 3;
    cout << " Srednee_znachenie = " << Srednee_znachenie << "\n";

    return 0;
}
