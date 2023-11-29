#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[11]{34,45,67,89,43,12,23,45,67,8, 99}; //в будующем размер будет изменен, нужно вывести все элементы
    int realsize = sizeof(arr) / sizeof(arr[0]); //вычисление кол-ва элементов в массиве
    for (int i = 0; i < realsize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}