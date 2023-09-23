#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    float m = 0;

    SetConsoleOutputCP(CP_UTF8);

    cout << "Введіть значення m та натисніть Enter: ";
    cin >> m;

    const double k = 2;

    double c = pow(cos(m), 2) + pow(k, 2);
    double x = exp(m * k);

    double y = pow(pow(x, 2) + pow(c, 2), 1./3);
    cout << "y = " << y << "; x = " << x << "; c = " << c << endl;

    return 0;
}
