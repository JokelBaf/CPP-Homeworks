#include <Windows.h>
#include <iostream>

#include "calculateSum.h"

using namespace std;

int main() 
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int k = 0;
        cout << "Введіть k та натисніть Enter: ";
        cin >> k;

        double Y = calculateSum(k);

        cout << "Y = " << Y << "\n\n";

        cout << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y') 
            cout << "\nДо побачення!";
        else 
            cout << endl;

    } while (q == 'y');

    return 0;
}