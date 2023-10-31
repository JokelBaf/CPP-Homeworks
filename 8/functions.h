#include <iostream>

using namespace std;

/**
 * @brief Takes an array (matrix) and its dimensions as input and prompts the user to input values for each element of the array.
 * 
 * @param matrix A pointer to an array of integers (matrix).
 * @param m The number of rows in the matrix.
 * @param n The number of columns in the matrix.
*/
void inputMatrix(int ** matrix, int m, int n);

/**
 * @brief Fills an array (matrix) with random integers between 0 and 99 (inclusive), with random signs.
 * 
 * @param matrix A pointer to an array of integers (matrix).
 * @param m The number of rows in the matrix.
 * @param n The number of columns in the matrix.
*/
void randomMatrix(int ** matrix, int m, int n);

/**
 * @brief Initializes an array (matrix) with zeros.
 * 
 * @param m The number of rows in the matrix.
 * @param n The number of columns in the matrix.
 * @return A pointer to the initialized matrix.
*/
int ** initMatrix(int m, int n);

/**
 * @brief Prints a matrix of integers.
 * 
 * @param matrix A pointer to an array of integers (matrix).
 * @param m The number of rows in the matrix.
 * @param n The number of columns in the matrix.
*/
void printMatrix(int ** matrix, int m, int n);

/**
 * @brief Deletes a dynamically allocated array (matrix) and sets its pointer to nullptr.
 * 
 * @param matrix The matrix to be deleted.
 * @param m The number of rows in the matrix.
 * @param n The number of columns in the matrix.
*/
void deleteMatrix(int **& matrix, int m);

/**
 * @brief Finds the maximum number in an array of integers representing a matrix row.
 * 
 * @param row Pointer to the array of integers (matrix row).
 * @param n The number of elements in the array.
 * @return The maximum number in the array.
*/
int findMaxNumber(int * row, int n);

/**
 * @brief Multiplies each element of a row of matrix A by the maximum element (number) of the corresponding row of matrix B.
 * The result is stored in the corresponding row of matrix C.
 * 
 * @param A The first matrix.
 * @param B The second matrix.
 * @param C The resulting matrix.
 * @param m The number of rows in matrices A and C.
 * @param n The number of columns in matrices A and B, and the number of columns in matrix C.
*/
void calculateC(int ** A, int ** B, int ** C, int m, int n);

/**
 * @brief Checks if an array of integers (matrix row) is sorted in ascending order.
 * 
 * @param row Pointer to the array of integers (matrix row).
 * @param size The size of the array.
 * @return True if the array is sorted in ascending order, false otherwise.
*/
bool isAscending(int * row, int size);

/**
 * @brief Checks if an array of integers (matrix row) is sorted in descending order.
 * 
 * @param row Pointer to the array of integers (matrix row).
 * @param size The size of the array.
 * @return True if the array is sorted in descending order, false otherwise.
*/
bool isDescending(int * row, int size);

/**
 * @brief Prints the indexes of the rows in a matrix that are arranged in ascending or descending order.
 * 
 * @param matrix The matrix to check.
 * @param m The number of rows in the matrix.
 * @param n The number of columns in the matrix.
 * @return true If at least one row is arranged in ascending or descending order.
 * @return false If no row is arranged in ascending or descending order.
*/
bool printArrangedRowsIndexes(int ** matrix, int m, int n);