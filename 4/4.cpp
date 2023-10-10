#include <Windows.h>
#include <iostream>

using namespace std;

int main() 
{
    SetConsoleOutputCP(CP_UTF8);

    int x = 0;
    cout << "Введіть x та натисніть Enter: ";
    cin >> x;

    for (int i = 2; i <= x; i*= 2) 
    {
        if (i == x) {
            cout << "Число є степенем двійки.";
            return 0;
        }
    }

    cout << "Число не є степенем двійки.";

    return 0;
}