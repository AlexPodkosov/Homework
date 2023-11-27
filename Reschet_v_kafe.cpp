// Reschet_v_kafe.cpp : Расчет заказа в кафетерии.

#include<iostream> 
using namespace  std;

int main() 
{
	setlocale(0, "");

	int gost;
	int cifraMenyu = 0;

	double summa = 0;
	double cena[6] = {850,270,1350,150,350,1520};
	bool chislo = true;

	cout << "Сколько Вас гостей?" << endl;
	cin >> gost;

	for (int i = 1; i <= gost; i++) {
		chislo = true;
		while (chislo) {
			cout << "Выбирите блюдо, гость №" << " " << i << endl;
			cout << "1-Стейк из говядины" << " " << cena[0] << endl;
			cout << "2-Борщ" << " " << cena[1] << endl;
			cout << "3-Шашлычный набор" << " " << cena[2] << endl;
			cout << "4-Лимонад" << " " << cena[3] << endl;
			cout << "5-Пиво" << " " << cena[4] << endl;
			cout << "6-Коньяк" << " " << cena[5] << endl;
			cout << "7-Завершить выбор" << endl;
			cout << "\t\tВведи номер из меню или завершите выбор нажав цифру 7" << "  " << endl;
			cin >> cifraMenyu;

			switch (cifraMenyu)
			{
			case 1: {
				cout << "Вы выбрали - Стейк из говядины" << endl;
				summa += cena[0];
				break; }
			case 2: {
				cout << "Вы выбрали - Борщ" << endl;
				summa += cena[1];
				break; }
			case 3: {
				cout << "ВЫ выбрали - Шашлычный набор" << endl;
				summa += cena[2];
				break; }
			case 4: {
				cout << "Вы выбрали - Лимонад" << endl;
				summa += cena[3];
				break; }
			case 5: {
				cout << "Вы выбрали - Пиво" << endl;
				summa += cena[4];
				break; }
			case 6: {
				cout << "Вы выбрали - Коньяк" << endl;
				summa += cena[5];
				break; }
			case 7: {
				system("cls");
				chislo = false;
				break; }
			}
		}
	}
	cout << "Итоговая сумма заказа:"" " << summa;

	return 0;
}