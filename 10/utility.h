#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>

#include "structs.h"

using namespace std;

/**
 * @brief Writes the given product to the specified output stream.
 *
 * @param out The output stream to write to.
 * @param product The product to write.
*/
void writeProduct(ostream & out, const Product & product);

/**
 * @brief Writes the given array of products to the output stream.
 * 
 * @param out The output stream to write the products to.
 * @param products The array of products to write.
 * @param productsCount The number of products in the array.
*/
void writeProducts(ostream & out, Product *& products, const int productsCount);

/**
 * @brief Saves an array of products to a file.
 * 
 * @param filename The name of the file to save the products to.
 * @param products A pointer to an array of Product objects.
 * @param productsCount The number of products in the array.
 * @return True if the products were successfully saved to the file, false otherwise.
*/
bool saveProducts(const char * filename, Product *& products, const int productsCount);

/**
 * @brief Adds a new product to the array of products.
 * 
 * @param products A pointer to the array of products.
 * @param productsCount A reference to the number of products in the array.
*/
void addProduct(Product *& products, int & productsCount);

/**
 * @brief Prints the details of all products in an array of Product objects.
 * 
 * @param products A pointer to an array of Product objects.
 * @param productsCount The number of Product objects in the array.
*/
void printProducts(Product *& products, const int productsCount);

/**
 * @brief Reads a Product object from the input stream.
 * 
 * @param in The input stream to read from.
 * @param product The Product object to populate with data.
*/
void readProduct(istream & in, Product & product);

/**
 * @brief Reads an array of Product objects from the input stream.
 * 
 * @param in The input stream to read from.
 * @param productsCount A reference to the number of products in the array.
 * @return A pointer to an array of Product objects.
*/
Product * readProducts(istream & in, int & productsCount);

/**
 * @brief Loads products from a file.
 * 
 * @param filename The name of the file to load the products from.
 * @param productsCount A reference to the number of products in the array.
 * @return A pointer to an array of Product objects.
*/
Product * loadProducts(const char * filename, int & productsCount);

/**
 * @brief Finds and returns the product with the highest quantity within a given array of products.
 * 
 * @param products A pointer to an array of product items.
 * @param productsCount The number of products in the array.
 * @return The product with the highest quantity.
*/
Product findHQProduct(Product *& products, const int productsCount);

#endif