#include <iostream>
#include <cmath>

#include "calcMinDifference.h"

using namespace std;

void calcMinDifference(int &numbersCount) 
{
    double* minDifference = new double(0);
    double* previousNumber = new double(0);

    double* minNumber1 = new double(0);
    double* minNumber2 = new double(0);

    cout << "\nВведіть перше число та натисніть Enter: ";
    cin >> *previousNumber;

    for (int i = 1; i < numbersCount; i++) 
    {
        cout << "Введіть наступне число та натисніть Enter: ";
        double* currentNumber = new double(0);
        cin >> *currentNumber;

        if (i == 1 || abs(*previousNumber - *currentNumber) < *minDifference) {
            *minDifference = abs(*previousNumber - *currentNumber);
            *minNumber1 = *previousNumber;
            *minNumber2 = *currentNumber;
        }

        *previousNumber = *currentNumber;
        delete currentNumber;
    }

    cout << "\nНайближчі за значенням елементи: " << *minNumber1 << ", " << *minNumber2 << "\n\n";

    delete minDifference, previousNumber, minNumber1, minNumber2;
}