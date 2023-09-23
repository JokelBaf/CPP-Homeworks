#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    int Ax = 0, Ay = 0, Bx = 0, By = 0, Cx = 0, Cy = 0;

    SetConsoleOutputCP(CP_UTF8);

    cout << "Введіть координати вершин A, B та C (Ax Ay Bx By Cx Cy) через пробіл та натисніть Enter: ";
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

    double AB = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
    double CB = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
    double AC = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));

    double P = AB + CB + AC;

    cout << "P = " << P << endl;

    return 0;
}
