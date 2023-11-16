// KakoySimvol.cpp : Пользователь вводит с клавиатуры символ. Определить какой это символ.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	
	int simvol;
	char ch;
	cout << "Пожалуйста, введите символ : \n";
	cin >> ch;
	simvol = (int)ch;

	if (((simvol >= 65) && (simvol <= 90)) ||
		((simvol >= 97) && (simvol <= 122)))
	{
		cout << "Вы ввели букву";
	}
	else if ((simvol >= 48) && (simvol <= 57))
	{
		cout << "Вы ввели цифру";
	}
	else if ((simvol == 33) || ((simvol >= 44) &&
		(simvol <= 46)) || (simvol == 58) ||
		(simvol == 59) || (simvol == 63))
	{
		cout << "Вы ввели знак";
	}
	else
	{
		cout << "Вы ввели неизвестный символ";
	}
	return 0;
}

