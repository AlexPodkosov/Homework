#define BAK 300

#include<iostream>
using namespace std;

int main() {
	const int BAK1 = 300;
	setlocale(LC_ALL, "RU");
	int distance1, distance2;
	int ves;
	int toplivo1;
	int toplivo2;

	cout << "Vvedite distance1:";
	cin >> distance1;
	cout << "Vvedite distance2:";
	cin >> distance2;

	cout << "Viberite ves vashevo gruza do 2000kg\n";
	cout << "<500kg - enter 1\n";
	cout << "<1000kg - enter 2\n";
	cout << "<1500kg - enter 3\n";
	cout << "<2000kg - enter 4\n";
	cin >> ves;

	switch (ves)
	{
	case 1:
		toplivo1 = 1 * distance1;
		toplivo2 = 1 * distance2;
		if ((toplivo1 <= BAK) && (toplivo2 <= BAK)) {
			if ((toplivo1 + toplivo2) <= BAK) {
				cout << "Polet vozmozhen, dozapravka ne nuzhna!\n";
			}
			else {
				cout << "Polet vozmozhen, dozapravka " << toplivo2 - (BAK - toplivo1) << "L\n";
			}
		}
		else {
			cout << "Polet ne vozmozhen!\n";
		}
		break;
	case 2:
		toplivo1 = 4 * distance1;
		toplivo2 = 4 * distance2;
		if ((toplivo1 <= BAK) && (toplivo2 <= BAK)) {
			if ((toplivo1 + toplivo2) <= BAK) {
				cout << "Polet vozmozhen, dozapravka ne nuzhna!\n";
			}
			else {
				cout << "Polet vozmozhen, dozapravka " << toplivo2 - (BAK - toplivo1) << "L\n";
			}
		}
		else {
			cout << "Polet ne vozmozhen!\n";
		}
		break;
	case 3:
		toplivo1 = 7 * distance1;
		toplivo2 = 7 * distance2;
		if ((toplivo1 <= BAK) && (toplivo2 <= BAK)) {
			if ((toplivo1 + toplivo2) <= BAK) {
				cout << "Polet vozmozhen, dozapravka ne nuzhna!\n";
			}
			else {
				cout << "Polet vozmozhen, dozapravka " << toplivo2 - (BAK - toplivo1) << "L\n";
			}
		}
		else {
			cout << "Polet ne vozmozhen!\n";
		}
		break;
	case 4:
		toplivo1 = 9 * distance1;
		toplivo2 = 9 * distance2;
		if ((toplivo1 <= BAK) && (toplivo2 <= BAK)) {
			if ((toplivo1 + toplivo2) <= BAK) {
				cout << "Polet vozmozhen, dozapravka ne nuzhna!\n";
			}
			else {
				cout << "Polet vozmozhen, dozapravka " << toplivo2 - (BAK - toplivo1) << "L\n";
			}
		}
		else {
			cout << "Polet ne vozmozhen!\n";
		}
		break;
	default:
		cout << "Neverniy vibor!\n";
		break;
	}
	return 0;
}