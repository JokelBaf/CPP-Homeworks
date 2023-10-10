#include <cmath>

#include "calculateProduct.h"
#include "calculateSum.h"

double calculateSum(int k) 
{
    double result = 0;
    for (int i = 1; i <= k; i++) {
        if ((3 - i) != 0) {
            double product = calculateProduct(k, i);
            result += (pow(i - 4, i) / pow(3 - i, 2)) * product;
        }
    }
    return result;
}