#include <iostream>
#include <Windows.h>

#include "functions.h"

using namespace std;


int main() 
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int m = 0;

        int ** A = nullptr;
        int ** B = nullptr;

        cout << "Введіть розмірність матриць: ";
        cin >> m;

        A = initMatrix(m, m);
        B = initMatrix(m, m);
        
        int method = 0;
        cout << "Введення елементів матриці з клавіатури чи генерація випадкових чисел? (1/2): ";
        cin >> method;

        switch (method) {
            case 1:
                cout << endl;
                inputMatrix(A, m, m);

                cout << endl;
                inputMatrix(B, m, m);
                
                break;
            case 2:
                randomMatrix(A, m, m);
                randomMatrix(B, m, m);
                break;
            default:
                cout << endl << "Невірний вибір, до побачення!" << endl;
                return 1;
        }

        int ** C = initMatrix(m, m);
        calculateC(A, B, C, m, m);

        cout << endl << "Матриця A:" << endl;
        printMatrix(A, m, m);

        cout << endl << "Матриця B:" << endl;
        printMatrix(B, m, m);

        cout << endl << "Матриця C:" << endl;
        printMatrix(C, m, m);

        cout << endl << "Індекси впорядкованих рядків третьої матриці: ";
        bool anyOrderedRows = printArrangedRowsIndexes(C, m, m);

        if (!anyOrderedRows) {
            cout << "відсутні.";
        }

        deleteMatrix(A, m);
        deleteMatrix(B, m);
        deleteMatrix(C, m);

        cout << endl << endl << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << endl << "До побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}