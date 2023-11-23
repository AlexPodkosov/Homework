// Sea_battle.cpp : Вывести в консоль поля игры морской бой.

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << char('A' + j) << i << " ";
		if (i < 9)
		{
			cout << endl;
		}
	}
	return 0;
}


