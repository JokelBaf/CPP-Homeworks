#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    SetConsoleOutputCP(CP_UTF8);
    
    cout << "Введіть значення x та натисніть Enter: ";
    cin >> x;

    double V18 = (sqrt(pow(x, 2) + sin(sqrt(x) + 2 * x))) - exp(2 * x + sqrt(x)) / (pow(cos(x), 2) + pow(log10(log(x)), 2));

    cout << "V18 = " << V18 << endl;

    return 0;
}
