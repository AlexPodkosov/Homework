// Zadanie1.cpp :  В одномерном массиве в заданном пользователем диапазоне,
// найти сумму элементов,значения которых меньше указанного пользователем.


#include <iostream> 
#include <random> 
#include <time.h> 
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[10];
    cout << "Enter limit(less than 10): ";
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 15;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    for (int i = 0; i < n; i++) {
        if (arr[i] < x) sum += arr[i];
        if (arr[i] > y) sum += arr[i];
    }

    cout << sum;
    return 0;
}