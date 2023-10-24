#include <iostream>
#include <Windows.h>

#include "functions.h"

using namespace std;

int main()
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int lengthA = 0;
        cout << "Введіть кількість елементів масиву A: ";
        cin >> lengthA;

        int * A = new int[lengthA];
        createArray(A, lengthA);

        cout << endl;

        int lengthB = 0;
        cout << "Введіть кількість елементів масиву B: ";
        cin >> lengthB;

        int * B = new int[lengthB];
        createArray(B, lengthB);

        int lengthD = 0;
        int * D = new int[lengthD];

        lengthD = addEvens(D, A, lengthD, lengthA);
        lengthD = addEvens(D, B, lengthD, lengthB);

        cout << endl << "D: ";

        for (int i = 0; i < lengthD; i++) {
            cout << D[i] << " ";
        }

        delete[] A;
        delete[] B;
        delete[] D;
        
        cout << endl << endl << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << endl << "До побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}