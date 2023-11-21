// Celye_cisla.cpp : Найти произведение всех целых чисел от a до 20.
// (значение а вводится с клвиатуры 1<=a<=20)

#include <iostream>
using namespace std;

int main()
{
   int a;
   long long pChisel = 1;

    cout << "Vvedite chislo s klaviatury (1 <= a <= 20) = "; 
    cin >> a;

    for (int i = a; i <= 20; i++)
    {
            pChisel = pChisel * i;
    }

    cout << " Proizvedenie vseh celych chicel: " << pChisel << endl;

    return 0;
}

