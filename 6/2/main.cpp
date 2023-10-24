#include <iostream>
#include <Windows.h>

#include "coutNumbers.h"

using namespace std;

int main()
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int n = 0;

        cout << "Введіть натуральне число n: ";
        cin >> n;

        if (n < 1) {
            cout << endl << "n має бути більше 1!" << endl << endl;
            continue;
        }

        cout << endl << "Числа від 1 до n:";
        coutNumbers(n);
        
        cout << endl << endl << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << endl << "До побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}