#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        double x = 0;
        cout << "Введіть дійсне x, яке більше за 1/2: ";
        cin >> x;

        if (x <= 0.5) {
            cout << "Введене число менше за 1/2.\n\n";
            continue;
        }

        double e = 0.0001;
        cout << "Введіть точність обчислень: ";
        cin >> e;


        double sum5 = 0;

        for (int i = 0; i < 5; i++) 
            sum5 += pow(x - 1, i + 1) / ((i + 1) * pow(x, i + 1));
        
        cout << "\nСума перших 5 членів ряду: " << fixed << sum5 << endl;


        int n = 0;

        double sum = (x - 1) / x;
        double oldSum = 0;
        
        do {
            n++;
            oldSum = sum;

            sum += pow(x - 1, n + 1) / ((n + 1) * pow(x, n + 1));

        } while (abs(sum - oldSum) > e);

        cout << "\nСума: " << fixed << sum << endl;
        cout << "Кількість ітерацій: " << n << endl;
        cout << "ln(x): " << fixed << log(x) << endl;


        cout << "\nБажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << "\nДо побачення!";
        else 
            cout << endl;

    } while (q == 'y');

    return 0;
}