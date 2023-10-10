#include <iostream>
#include <Windows.h>

#include "calcMinDifference.h"

using namespace std;

int main() 
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int* numbersCount = new int(0);
        
        cout << "Введіть кількість дійсних чисел та натисніть Enter: ";
        cin >> *numbersCount;

        if (*numbersCount <= 2) {
            cout << "Кількість дійсних чисел має бути більше 2!\n\n";
            continue;
        }

        calcMinDifference(*numbersCount);
        delete numbersCount;

        cout << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << "\nДо побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}