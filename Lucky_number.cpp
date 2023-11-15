// Lucky_number.cpp : Пользователь вводит с клавиатуры любое шетстизначное число.Написать программу, которая опряделяет равенство 3 первых числе и 3 последних.
// Если число не шестизначное, то сообщить об ошибке.

#include <iostream>
using namespace std;


int main()
{
	setlocale(0, "");

	int a;  
	cout << "Введите любое шестизначное число = ";
	cin >> a;

	if (a > 100000 && a < 1000000) {
		cout << "Верное шестизначное число" << endl;
	} 
	else {
		cout << "Не верное число, ошибка!!!";
	}
	int ch6 = a % 10;
	a = (a - ch6) / 10;
	int ch5 = a % 10;
	a = (a - ch5) / 10;
	int ch4 = a % 10;
	a = (a - ch4) / 10;
	int ch3 = a % 10;
	a = (a - ch3) / 10;
	int ch2 = a % 10;
	a = (a - ch2) / 10;
	int ch1 = a;

	//cout << ch1   <<   ch2   <<   ch3   <<   ch4   <<   ch5   <<   ch6;

	int Lucky_number1, Lucky_number2;

	Lucky_number1 = ch1 + ch2 + ch3;
	Lucky_number2 = ch4 + ch5 + ch6;
	 
	//cout << Lucky_number1 << endl;
	//cout << Lucky_number2 << endl;

	if ((Lucky_number1) == (Lucky_number2)) {
 
		cout << "Счастливое число!!!";
	}
	else
	{
		cout << "Не счастливое число!!!";
	}

	return 0;
}


