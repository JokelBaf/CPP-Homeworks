#include <iostream>
#include <Windows.h>

#include "functions.h"

using namespace std;


int main() 
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        const int linesCount = 3;
        const int lineLength = 100;

        cout << "Введіть " << linesCount << " рядки тексту:" << endl;
        char ** lines = inputText(linesCount, lineLength);

        for (int i = 0; i < linesCount; i++) {
            swapWords(lines[i]);
        }

        cout << endl << "Результат:" << endl;
        for (int i = 0; i < linesCount; i++) {
            cout << lines[i] << endl;
        }
        
        deleteText(lines, linesCount);

        cout << endl << endl << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << endl << "До побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}