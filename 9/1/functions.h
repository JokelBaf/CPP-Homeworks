#include <iostream>

using namespace std;

/**
 * @brief Swaps the first two words in a given string.
 * 
 * @param str The string to swap the first two words of.
*/
void swapWords(char *& str);

/**
 * @brief Takes in the number of lines and the length of each line and returns a dynamically allocated array of strings.
 * 
 * @param linesCount The number of lines to be inputted.
 * @param lineLength The length of each line.
 * @return char** A dynamically allocated array of strings.
*/
char ** inputText(const int linesCount, const int lineLength);

/**
 * @brief Deletes the dynamically allocated memory for the lines array.
 * 
 * @param lines A pointer to a pointer to char, representing the lines array.
 * @param linesCount An integer, representing the number of lines in the array.
*/
void deleteText(char **& lines, const int linesCount);