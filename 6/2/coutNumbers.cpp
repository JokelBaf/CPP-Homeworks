#include "coutNumbers.h"

void coutNumbers(int n, int current)
{
    cout << " " << current;

    if (current == n) {
        return;
    }
    coutNumbers(n, current + 1);
}