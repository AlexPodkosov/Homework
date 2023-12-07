// Zadanie2.cpp : Написать программу, которая находит в массиве значения, повторяющиеся два и более раз, и показывает их на экран.
//

#include <iostream>

int main()
{

	int A[10] = { 1,2,3,5,9,5,2,8,2,3 };
	for (int i = 0; i < 10; i++)
	{
		for (int y = 1; y < 10; y++)
		{
			if (A[i] == A[y] && i != y)
			{
				std::cout << A[i] << " ";
				break;
			}
		}
		std::cout << "\n";
	}
	
	return 0;
}

