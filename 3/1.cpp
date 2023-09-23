#include <Windows.h>
#include <iostream>

using namespace std;

int main() 
{
    double a = 0, b = 0, c = 0;

    SetConsoleOutputCP(CP_UTF8);

    cout << "Введіть три числа через пробіл: ";
    cin >> a >> b >> c;

    double mean = (a + b + c) / 3;
    bool any_results = false;

    if (abs(a) > mean) {
        cout << abs(a) << " ";
        any_results = true;
    }
    if (abs(b) > mean) {
        cout << abs(b) << " ";
        any_results = true;
    }
    if (abs(c) > mean) {
        cout << abs(c) << " ";
        any_results = true;
    }
    
    if (!any_results) {
        cout << "Числа за модулем більшим ніж середнє арифметичне відсутні.";
    }
}