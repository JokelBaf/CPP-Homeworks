#include "recursion.h"


double rFactorial(int number) 
{
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return number * rFactorial(number - 1);
    }
}


double rCKN(int k, int n) 
{
    if (k > n && n >= 0) {
        return 0;

    } else if ((k == n && n >= 0) || (k == 0 && n > 0)) {
        return 1;

    } else {
        double C1 = rFactorial(n - 1) / (rFactorial(k - 1) * rFactorial((n - 1) - (k - 1)));
        double C2 = rFactorial(n - 1) / (rFactorial(k) * rFactorial((n - 1) - k));
        return C1 + C2; 
    }
}


int rFibonacci(int n, int a, int b)
{
    if (n == 0) {
        return a;
    }
    if (n == 1) {
        return b;
    }
    return rFibonacci(n - 1, b, a + b);
}


int rSum(int n, int k, double sum) 
{
    if (k > n/2) {
        cout << "Глибина рекурсії: " << k << endl;
        return sum;
    } else {
        return rSum(n, k + 1, sum + rCKN(k, n - k));
    }
}