#include "iteration.h"


double iFactorial(int number) 
{
    double result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}


double iCKN(int k, int n) 
{
    if (k > n && n >= 0) {
        return 0;

    } else if ((k == n && n >= 0) || (k == 0 && n > 0)) {
        return 1;

    } else {
        double C1 = iFactorial(n - 1) / (iFactorial(k - 1) * iFactorial((n - 1) - (k - 1)));
        double C2 = iFactorial(n - 1) / (iFactorial(k) * iFactorial((n - 1) - k));
        return C1 + C2; 
    }
}


int iFibonacci(int n)
{
    int a = 0, b = 1;
    for(int i = 2; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int iSum(int n) 
{
    double result = 0;

    int k = 0;
    while (k <= n/2) {
        result += iCKN(k, n - k);
        k++;
    }
    cout << "Кількість ітерацій: " << k << endl;

    return result;
}