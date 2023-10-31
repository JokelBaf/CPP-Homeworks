#include <iostream>

using namespace std;


/**
 * @brief Creates an array of integers either by manual input or by generating random numbers.
 * 
 * @param array Pointer to the array to be created.
 * @param length Length of the array to be created.
*/
void createArray(int * array, const int length);


/**
 * @brief Counts the number of occurrences of an element in an array.
 * 
 * @param array The array to count elements in.
 * @param index The index of the element to count.
 * @return The number of occurrences of the element in the array.
*/
int countElement(int * array, const int index);


/**
 * @brief Removes extra (>2) occurrences of the element from the array.
 * 
 * @param array The array to remove elements from.
 * @param length The length of the integer array.
 * @param element The element to remove from the integer array.
 * @param count The number of times a given element is repeated in the array.
*/
void removeElement(int *& array, const int length, const int element, const int count);


/**
 * @brief Removes extra elements from an array by checking the number of occurrences of each element.
 * If an element occurs more than twice, it removes the extra occurrences and recursively calls itself with the updated array.
 * 
 * @param array A pointer to the array to be modified.
 * @param length The length of the original array.
 * @param updatedLength The length of the updated array.
 * @return The length of the final array after removing extra elements.
*/
int removeExtraElements(int *& array, const int length, int updatedLength) ;