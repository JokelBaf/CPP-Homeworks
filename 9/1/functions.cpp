#include "functions.h"


void swapWords(char *& str) 
{
    char * firstWord = strtok(str, " ");
    char * secondWord = strtok(nullptr, " ");
    
    if (firstWord == nullptr || secondWord == nullptr) {
        return;
    }
    
    char * restOfString = strtok(nullptr, "");
    
    size_t newStrLen = strlen(str) + 1;
    char * newStr = new char[newStrLen];

    strcpy(newStr, secondWord);
    strcat(newStr, " ");
    strcat(newStr, firstWord);

    if (restOfString != nullptr) {
        strcat(newStr, " ");
        strcat(newStr, restOfString);
    }

    delete[] str; 
    str = newStr;
}

char ** inputText(const int linesCount, const int lineLength)
{
    char ** lines = new char * [linesCount];

    for (int i = 0; i < linesCount; i++) {
        lines[i] = new char[lineLength] {};
        
        cin.getline(lines[i], lineLength);
    }

    return lines;
}

void deleteText(char **& lines, const int linesCount)
{
    for (int i = 0; i < linesCount; i++) {
        delete[] lines[i];
    }
    delete[] lines;
}