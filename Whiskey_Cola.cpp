// Whiskey_Cola.cpp : Программа, которая расчитывает ингредиенты в напитке виски-кола.

#include <iostream>
using namespace std;

int main()
{
	int Whiskey = 0;
	int Cola = 0;
	int Ice = 0;
	
	cout << "Whiske = " ;
	cin >> Whiskey;

	Cola = Whiskey * 3;
	cout << "Cola =  "<< Cola << endl;

	Ice = (Whiskey + Cola) * 2;
	cout << "Ice = " << Ice << endl;

	int Drink;
	Drink = Whiskey + Cola + Ice;

	cout << "Drink = " << Drink << endl;

	return 0;

}

