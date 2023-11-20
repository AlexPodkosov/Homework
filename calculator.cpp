/* ДЗ - добавить возможность подсчета остатка от деления и вычитание */
#include <iostream>
using namespace std;

int main()
{
    char znak;
    double a;
    double b;

    cout << "Vvedeti a:";
    cin >> a;
    cout << "Vvedite b:";
    cin >> b;
    cout << "Vvedite *, /, + "<< endl;
    cin >> znak;

    if (znak == '*') {
        cout << "a*b=" << (a*b);
    }
    else if (znak == '/') {
        cout << "a/b=" << (a / b);
    }
    else if (znak == '+') {
        cout << "a+b=" << (a + b);
    }
    else {
        cout << "Neverniy znak!";
    }
    
    return 0;
}