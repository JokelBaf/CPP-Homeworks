#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int start = 0.5, end = 4;
    double h = 0.1;

    cout << string(31, '-') << endl;

    for (double x = start; x <= end; x += h) 
    {
        cout << fixed << setw(3) << left << "|";
        cout << setprecision(1) << setw(5) << x << setw(3) << "|"
             << setprecision(4) << setw(8) << pow(x / 3, 2) << setw(3) << "|"
             << setw(8) << cos(x + 3.141592 / 3) + 1.8 << "|"
             << endl;
    }

    cout << string(31, '-') << endl;
    
    return 0;
}