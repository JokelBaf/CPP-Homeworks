#include <iostream>
#include <Windows.h>

#include "functions.h"

using namespace std;

int main()
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int length = 0;

        cout << "Введіть кількість елементів масиву: ";
        cin >> length;

        int * array = new int[length];

        createArray(array, length);
        cout << "Створений масив: ";
        
        for (int i = 0; i < length; i++) {
            cout << array[i] << " ";
        }

        int newLength = removeExtraElements(array, length, length);

        cout << endl << "Масив після видалення зайвих елементів: ";

        for (int i = 0; i < newLength; i++) {
            cout << array[i] << " ";
        }

        delete[] array;
        
        cout << endl << endl << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << endl << "До побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}