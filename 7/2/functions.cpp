#include "functions.h"


void createArray(int * array, const int length)
{
    int method = 0;

    cout << "Введіть 1 для вводу елементів масиву вручну або 2 для генерації випадкових чисел: ";
    cin >> method;

    switch(method) {
        case 1:
            for (int i = 0; i < length; i++) {
                cout << "Введіть " << i << " елемент масиву: ";
                cin >> array[i];
            }
            return;
        case 2:
            for (int i = 0; i < length; i++) {
                array[i] = rand() % 100;
            }
            return;
        default:
            cout << endl << "Невірний метод!" << endl;
            break;
    }
    return createArray(array, length);
}

int getEvensCount(int *& array, int length)
{
    int evensCount = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            evensCount++;
        }
    }
    return evensCount;
}

int addEvens(int *& container, int *& array, int containerSize, int arraySize)
{
    int evensCount = getEvensCount(array, arraySize);
    int newLength = containerSize + evensCount;

    int * newContainer = new int[newLength];

    for (int i = 0; i < containerSize; i++) {
        newContainer[i] = container[i];
    }

    for (int i = 0; i < arraySize; i++) {
        if (array[i] % 2 == 0) {
            newContainer[containerSize++] = 2 * array[i];
        }
    }

    delete[] container;
    container = newContainer;

    return newLength;
}