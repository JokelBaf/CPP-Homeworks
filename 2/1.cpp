#include <Windows.h>
#include <iostream>

using namespace std;

int main() 
{
    int y = 0, f = 0;

    SetConsoleOutputCP(CP_UTF8);
    
    cout << "Введіть значення y та f через пробіл та натисніть Enter: ";
    cin >> y >> f;

    double G = (exp(2 * y) + sin(f + 3)) / (log(3.8 * y + f));
    cout << "G = " << G << endl;

    return 0;
}
