#include <string>
#include <iostream>
#include <Windows.h>

#include "navigation.h"
#include "structs.h"

using namespace std;

int main() 
{
    SetConsoleOutputCP(CP_UTF8);

    string fileName = "products.txt";

    int productsCount = 0;
    bool fileLoaded = false;
    bool changesSaved = true;
    Product * products = new Product[0];

    mainMenu(fileName, fileLoaded, changesSaved, productsCount, products);

    return 0;
}