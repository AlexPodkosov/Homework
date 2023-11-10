// Rashod_benzina.cpp Вывести на экран сравинительную таблицу сос тоимостью поездки на разных видах бензина.

#include <iostream>
using namespace std;

int main()
{
    double rastoyanie, rashod, summa1, summa2, summa3;
    double summa_poezdki1, summa_poezdki2, summa_poezdki3;
 
    cout << "Rastoyanie (km) = ";
    cin >> rastoyanie;

    cout << "Rashod = ";
    cin >> rashod;

    cout << "Benz1 = ";
    cin >> summa1;

    cout << "Benz2 = ";
    cin >> summa2;

    cout << "Benz3 = ";
    cin >> summa3;
    
    summa_poezdki1 = rastoyanie * summa1* rashod/100;
    summa_poezdki2 = rastoyanie * summa2* rashod/100;
    summa_poezdki3 = rastoyanie * summa3* rashod/100;

    cout << "\t\t Itogovaya tablica. " << endl;
    cout << "Summa poezdki - Benz1 = " << summa_poezdki1 << endl;
    cout << "Summa poezdki - Benz2 = " << summa_poezdki2 << endl;
    cout << "Summa poezdki - Benz3 = " << summa_poezdki3 << endl;

    return 0;
}


