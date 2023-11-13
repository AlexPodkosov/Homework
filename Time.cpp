// Home task_1.cpp : Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня.
// Вывести на экран текущее время в часах, минутах и секундах.
// Посчитать сколько часов, минут и секунд осталось до полуночи.

#include <iostream>
using namespace std;


int main()
{
    int vvod, ostatok, hour, minute, second;

    cout << "VVedite vremya v sekundah :";
    cin >> vvod; // ВВодим время в секундах.

    hour = vvod / 3600; // Чтобы получить час - ДЕЛИМ ВВЕДЕННЫЕ СЕКУНДЫ НА 3600.
    ostatok = vvod % 3600; // ОСТАТОК ОТ ДЕЛЕНИЯ
    minute = ostatok / 60; 
    second = ostatok % 60;
         
    cout << "Tekushee vrema = :" << hour << " hour " << minute << " minute " << second << " second " << endl;

    int vvod1, ostatok1, hour1, minute1, second1;

    vvod1 = 86400 - vvod; // Вычитаем   введенные секунды от общей массы секунд в сутках (24*3600)

    hour1 = vvod1 / 3600; 
    ostatok1 = vvod1 % 3600; 
    minute1 = ostatok1 / 60;
    second1 = ostatok1 % 60;

    cout << "Vremya do polunochi = :" << hour1 << " hour " << minute1 << " minute " << second1 << " second " << endl;

    return 0; 
}

