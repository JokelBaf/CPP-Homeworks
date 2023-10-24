#include <iostream>
#include <chrono>
#include <Windows.h>

#include "iteration.h"
#include "recursion.h"

using namespace std;
using namespace std::chrono;

int main()
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int n = 0;

        cout << "Введіть n: ";
        cin >> n;

        if (n < 1) {
            cout << endl << "n має бути більше 1!" << endl << endl;
            continue;
        }

        cout << endl;
        cout << "Число Фібоначчі (Ітеративний метод): " << iFibonacci(n) << endl;
        cout << "Число Фібоначчі (Рекурсивний метод): " << rFibonacci(n) << endl;

        cout << endl;
        cout << "Число Фібоначчі F(n + 1) (Ітеративний метод): " << iFibonacci(n + 1) << endl;
        cout << "Число Фібоначчі F(n + 1) (Рекурсивний метод): " << iFibonacci(n + 1) << endl;
        cout << endl;

        auto start = high_resolution_clock::now();

        int Fr = rSum(n);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << duration.count() << " мікросекунд (рекурсивний)" << endl;

        cout << endl;

        start = high_resolution_clock::now();

        int Fi = iSum(n);
        
        stop = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop - start);
        cout << duration.count() << " мікросекунд (ітераційний)" << endl;

        cout << endl;
        cout << "Значення суми (Ітераційний метод): " << Fi << endl;
        cout << "Значення суми (Рекурсивний метод): " << Fr << endl;
        
        cout << endl << endl << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << endl << "До побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}