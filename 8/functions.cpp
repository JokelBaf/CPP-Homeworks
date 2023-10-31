#include "functions.h"


void inputMatrix(int ** matrix, int m, int n)
{
    for (int i = 0; i < m; i++) {
        cout << "Введіть " << n << " елементів " << i + 1 << " рядка: ";

        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

void randomMatrix(int ** matrix, int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100 + pow(-1, rand() % 2);
        }
    }
}

int ** initMatrix(int m, int n)
{
    int ** matrix = new int*[m];

    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n] {};
    }

    return matrix;
}

void printMatrix(int ** matrix, int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void deleteMatrix(int **& matrix, int m)
{
    for (int i = 0; i < m; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

int findMaxNumber(int * row, int length)
{
    int max = row[0];

    for (int i = 1; i < length; i++) {
        if (row[i] > max) {
            max = row[i];
        }
    }
    return max;
}

void calculateC(int ** A, int ** B, int ** C, int m, int n)
{
    for (int i = 0; i < m; i++) {
        int max = findMaxNumber(B[i], n);

        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] * max;
        }
    }
}

bool isAscending(int * row, int length) 
{
    for (int i = 0; i < length - 1; ++i) {
        if (row[i] > row[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isDescending(int * row, int length) 
{
    for (int i = 0; i < length - 1; ++i) {
        if (row[i] < row[i + 1]) {
            return false;
        }
    }
    return true;
}

bool printArrangedRowsIndexes(int ** matrix, int m, int n) 
{
    bool hasOrderedRow = false;

    for (int i = 0; i < m; ++i) {
        if (
            isAscending(matrix[i], n) || 
            isDescending(matrix[i], n)
        ) {
            cout << i << " ";
            hasOrderedRow = true;
        }
    }

    return hasOrderedRow;
}