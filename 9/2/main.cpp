#include <Windows.h>
#include <iostream>
#include <string>

#include "functions.h"

using namespace std;

int main() 
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        const int linesCount = 3;

        cout << "Введіть " << linesCount << " рядки тексту:" << endl;
        string * lines = inputText(linesCount);

        for (int i = 0; i < linesCount; i++) {
            addStars(lines[i]);
        }

        cout << endl << "Результат:" << endl;
        for (int i = 0; i < linesCount; i++) {
            cout << lines[i] << endl;
        }

        delete[] lines;

        cout << endl << endl << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << endl << "До побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}