#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    SetConsoleOutputCP(CP_UTF8);

    cout << "Введіть значення x та натисніть Enter: ";
    cin >> x;

    double y = ((pow(x, 2) - 2 * x) / ((2 * x + 3) * (x + 4))) + (pow(x, 1./3) / (2 * x + 3));
    cout << "y = " << y << endl;

    return 0;
}