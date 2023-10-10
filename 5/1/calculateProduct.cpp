#include "calculateProduct.h"

double calculateProduct(int k, int i)
{
    double result = 1;
    for (int n = i; n <= 2 + k; n++) {
        if ((n - i) != 0)
            result *= (n + 0.8) / (n - i);
    }
    return result;
}