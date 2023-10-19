#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c;

    cout << "Введите значения a, b, c:" << endl;

    cin >> a;
    cin >> b;
    cin >> c;

    double y = (a / b) * sqrt(fabs(pow(a, 2.) - pow(b, 2.))) * (sin(a + 2 * c) + pow(b, 1.0 / 3)) / pow(c, 1.0 / 4);

    cout << "\na = " << a << ", b = "<< b << ", c = " << c << "\ny = " << y << endl;
}