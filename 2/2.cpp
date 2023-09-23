#include <Windows.h>
#include <iostream>

using namespace std;

int main() 
{
    int y = 0, t = 0;

    SetConsoleOutputCP(CP_UTF8);
    
    cout << "Введіть значення y та t через пробіл та натисніть Enter: ";
    cin >> y >> t;

    double S = (4.351 * pow(y, 3) + 2 * t * log(t)) / sqrt(cos(2 * y) + 1);
    cout << "S = " << S << endl;

    return 0;
}
