#include <Windows.h>
#include <iostream>

using namespace std;

int main() 
{
    char q = 'y';

    SetConsoleOutputCP(CP_UTF8);

    do {
        int number = 0;
        bool anyResults = false;

        cout << "Введіть число та натисніть Enter: ";
        cin >> number;
        
        cout << "Цифри числа, кратні 5: ";

        while (number > 0) {
            int digit = number % 10;

            if (digit % 5 == 0) {
                anyResults = true;
                cout << digit << " ";
            }
            number /= 10;
        }

        if (!anyResults) 
            cout << "відсутні.";
        
        cout << "\n\nБажаєте повторити? (y/n): ";
        cin >> q;

        if (q != 'y')
        
            cout << "\nДо побачення!";
        else
            cout << endl;

    } while (q == 'y');

    return 0;
}