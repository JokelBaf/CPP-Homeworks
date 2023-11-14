#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Takes in the number of lines and returns a dynamically allocated array of strings.
 * 
 * @param linesCount The number of lines to be inputted.
 * @return string A dynamically allocated array of strings.
*/
string * inputText(const int linesCount);

/**
 * @brief Adds a star before each word in the given string.
 * 
 * @param str The string to modify.
*/
void addStars(string & str);