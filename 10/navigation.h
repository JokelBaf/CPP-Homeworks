#ifndef NAVIGATION_H
#define NAVIGATION_H

#include <iostream>
#include <stdlib.h>

#include "structs.h"

using namespace std;

#define GREY     "\u001b[30;1m" // Grey color
#define BLUE     "\u001b[34;1m" // Blue color
#define GREEN    "\u001b[32;1m" // Green color
#define YELLOW   "\u001b[33;1m" // Yellow color
#define MAGENTA  "\u001b[35;1m" // Magenta color
#define RED      "\u001b[31;1m" // Red color
#define WHITE    "\u001b[0m"    // White color (default)

/**
 * @brief Displays the main menu and handles user input.
 * 
 * @param fileName The name of the file to load/save products from/to.
 * @param fileLoaded A boolean indicating whether a file has been loaded.
 * @param changesSaved A boolean indicating whether changes have been saved.
 * @param productsCount The number of products in the products array.
 * @param products A pointer to the array of products.
*/
void mainMenu(string & fileName, bool & fileLoaded, bool &  changesSaved, int & productsCount, Product *& products);

/**
 * @brief Loads the products menu from a file.
 * 
 * @param fileName The name of the file to load the products from.
 * @param fileLoaded A boolean indicating whether the file has been loaded successfully.
 * @param changesSaved A boolean indicating whether changes have been saved to the file.
 * @param productsCount The number of products loaded from the file.
 * @param products A pointer to an array of Product objects.
*/
void loadProductsMenu(string & fileName, bool & fileLoaded, bool &  changesSaved, int & productsCount, Product *& products);

/**
 * @brief Saves the products to a file.
 * 
 * @param fileName The name of the file to save the products to.
 * @param fileLoaded A boolean indicating whether a file has been loaded.
 * @param changesSaved A boolean indicating whether changes have been saved.
 * @param productsCount The number of products to save.
 * @param products A pointer to an array of Product objects to save.
*/
void saveProductsMenu(string & fileName, bool & fileLoaded, bool &  changesSaved, int & productsCount, Product *& products);

/**
 * @brief Prints the products menu and handles user input.
 * 
 * @param fileName The name of the file to load/save products from/to.
 * @param fileLoaded A boolean indicating whether a file has been loaded.
 * @param changesSaved A boolean indicating whether changes have been saved.
 * @param productsCount A reference to an integer representing the number of products.
 * @param products A pointer to an array of Product objects.
*/
void printProductsMenu(string & fileName, bool & fileLoaded, bool &  changesSaved, int & productsCount, Product *& products);

/**
 * @brief Adds a new product to the products array and updates the file.
 * 
 * @param fileName The name of the file to save the products to.
 * @param fileLoaded A boolean indicating whether the file has been loaded.
 * @param changesSaved A boolean indicating whether changes have been saved.
 * @param productsCount A reference to the number of products in the array.
 * @param products A pointer to the array of products.
*/
void addProductMenu(string & fileName, bool & fileLoaded, bool &  changesSaved, int & productsCount, Product *& products);

/**
 * @brief Clears the products menu and deallocates the memory used by the products array.
 * 
 * @param fileName The name of the file where the products are stored.
 * @param fileLoaded A boolean indicating whether the file has been loaded.
 * @param changesSaved A boolean indicating whether changes have been saved to the file.
 * @param productsCount The number of products in the products array.
 * @param products A pointer to the array of products.
*/
void clearProductsMenu(string & fileName, bool & fileLoaded, bool & changesSaved, int & productsCount, Product *& products);

/**
 * @brief Displays the menu for finding the product with the highest quantity in stock.
 * 
 * @param fileName The name of the file to load the products from.
 * @param fileLoaded A boolean flag indicating whether the file has been loaded.
 * @param changesSaved A boolean flag indicating whether changes have been saved to the file.
 * @param productsCount The number of products in the array.
 * @param products A pointer to the array of products.
*/
void highestQuantityMenu(string & fileName, bool & fileLoaded, bool & changesSaved, int & productsCount, Product *& products);

/**
 * @brief Enters the main menu of the program.
 * 
 * @param fileName The name of the file to load/save data from/to.
 * @param fileLoaded A boolean flag indicating whether a file has been loaded.
 * @param changesSaved A boolean flag indicating whether changes have been saved.
 * @param productsCount The number of products currently in the program.
 * @param products A pointer to an array of Product objects.
*/
void enterToMainMenu(string & fileName, bool & fileLoaded, bool &  changesSaved, int & productsCount, Product *& products);

#endif