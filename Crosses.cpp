// Крестики-нолики
#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int row = 3; //строки поля
	const int col = 3; //столбцы поля
	int field[row][col]{};
	bool hod = true; //true - ход крестиков, false- ход ноликов
	int x, y;

	while (true) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (field[i][j] == 0) { // отрисовываем пустоту
					cout << "  ";
				}
				if (field[i][j] == 1) { // отрисовываем крестик
					cout << " X";
				}
				if (field[i][j] == 2) { // отрисовываем нолик
					cout << " O";
				}
			}
			cout << endl;
		}

		cout << "Ваш ход" << endl;
		cout << "Строка(1-3):";
		cin >> x;
		x = x - 1;
		cout << "Столбец(1-3):";
		cin >> y;
		y = y - 1;

		if (x < 0 || x>2 || y < 0 || y>2) {
			system("cls");
			cout << "Введите верные координаты!" << endl;
			continue;
		}

		if (field[x][y] != 0) {
			system("cls");
			cout << "Ячейка занята" << endl;
			continue;
		}

		if (hod) { // равносильно hod==true
			field[x][y] = 1;
			hod = false;
		}
		else { // равносильно hod==false
			field[x][y] = 2;
			hod = true;
		}
		system("cls");
	}
	return 0;
}