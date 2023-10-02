#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int N;

        cout << "Введіть двозначне число N: ";
        cin >> N;

        if (N < 10 || N > 99) {
            cout << "Введене число не є двозначним.\n\n";
            continue;
        }

        cout << "\nДвозначні числа від 1 до N: 2, 4, 6, 8, 10";

        int sum = 2 + 4 + 6 + 8 + 10;

        for (int i = 10; i < N; i++) {
            if (i % 2 == 0) {
                cout << ", " << i;
                sum += i;
            }
        }

        cout << "\nСума цих чисел: " << sum << "\n\n";

        cout << "Бажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
            cout << "\nДо побачення!";
        else 
            cout << endl;

    } while (q == 'y');
}