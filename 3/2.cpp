#include <Windows.h>
#include <iostream>

using namespace std;

int main() 
{
    double x = 0, y = 0, z = 0;
    int variant;

    SetConsoleOutputCP(CP_UTF8);

    cout << "Введіть варіант значень (1 - 3) та натисніть Enter: ";
    cin >> variant;

    switch(variant) 
    {
        case 1:
            x = -7.2;
            y = 3.14;
            z = -2.5;
            break;
        case 2:
            x = -4;
            y = -3;
            z = 9.15;
            break;
        case 3:
            x = 3.14;
            y = -3.4;
            z = 0.59;
            break;
        default:
            cout << "Введений некоректний варіант значень.";
            return 0;
    }

    double P = 3.141592653589793238;
    cout << endl << "Числа, які за модулем більші ніж число P:" << endl;

    if (abs(x) > P) {
        cout << x << endl;
    }
    if (abs(y) > P) {
        cout << y << endl;
    }
    if (abs(z) > P) {
        cout << z << endl;
    }
}