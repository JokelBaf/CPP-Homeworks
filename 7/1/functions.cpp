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


int countElement(int * array, const int length, const int index)
{
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] == array[index]) {
            count++;
        }
    }
    return count;
}


void removeElement(int *& array, const int length, const int element, const int count)
{
    int * newArray = new int[length - (count - 2)];
    int foundCount = 0;
    int j = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] == element) {
            foundCount++;
            if (foundCount > 2) {
                continue;
            }
        }
        newArray[j++] = array[i];
    }
    delete[] array;
    array = newArray;
}


int removeExtraElements(int *& array, const int length, int updatedLength) 
{
    for (int i = 0; i < length; i++) {
        int count = countElement(array, length, i);
        
        if (count > 2) {
            removeElement(array, length, array[i], count);

            return removeExtraElements(
                array, 
                length - (count - 2), 
                updatedLength - (count - 2)
            );
        }
    }
    return updatedLength == 0 ? length : updatedLength;
}