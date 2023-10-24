#include <iostream>
#include <vector>

using namespace std;

/**
 * Creates an array of integers either by manual input or by generating random numbers.
 * @param array Pointer to the array to be created.
 * @param length Length of the array to be created.
*/
void createArray(int * array, const int length);

/**
 * Counts the number of even integers in an array.
 *
 * @param array A pointer to an array of integers.
 * @param length The length of the array.
 * @return The number of even integers in the array.
*/
int getEvensCount(int *& array, int length);

/**
 * Adds all even numbers from the given array to the end of the container array.
 * 
 * @param container A pointer to the container array.
 * @param array A pointer to the array containing the numbers to be added.
 * @param containerSize The size of the container array.
 * @param arraySize The size of the array containing the numbers to be added.
 * @return The new length of the container array after the even numbers have been added.
*/
int addEvens(int *& container, int *& array, int containerSize, int arraySize);