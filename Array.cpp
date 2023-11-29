/*
В одномерном массиве, заполненном случайными числами,
определить минимальный и максимальный элементы.
Вариант 1
*/

// Когда вы видите заголовочные файлы, начинающиеся с "c", это, скорее всего, стандартные заголовочные файлы языка C. 
// В C++, часто используется их C++-версия, которая начинается с "с" и дополняется "с" в конце (например, <cstdlib> вместо <stdlib.h>). 
// Это сделано для поддержки как C, так и C++ кода в рамках стандартной библиотеки.

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int array[10];

    // Инициализация генератора случайных чисел
    srand(time(NULL));

    // Заполнение массива случайными числами и вывод на экран
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << "\n";
    }

    // Поиск минимального и максимального элементов
    int minElement = array[0];
    int maxElement = array[0];

    for (int i = 1; i < 10; i++)
    {
        if (array[i] < minElement)
        {
            minElement = array[i];
        }
        if (array[i] > maxElement)
        {
            maxElement = array[i];
        }
    }

    // Вывод результатов
    cout << "Минимальный элемент: " << minElement << endl;
    cout << "Максимальный элемент: " << maxElement << endl;

    return 0;
}