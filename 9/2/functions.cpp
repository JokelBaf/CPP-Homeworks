#include "functions.h"

string * inputText(const int linesCount) 
{
    string * lines = new string[linesCount];

    for (int i = 0; i < linesCount; i++) {
        getline(cin, lines[i]);
    }

    return lines;
}

void addStars(string & str) 
{
    if (str.empty()) {
        return;
    }
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            str.insert(i, "*");
            ++i;
        }
    }
}
