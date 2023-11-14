#include "utility.h"

void writeProduct(ostream & out, const Product & product)
{
    out << "product: "      << product.name         << endl
        << "price: "        << product.price        << endl
        << "quantity: "     << product.quantity     << endl
        << "manufacturer: " << product.manufacturer << endl;
}

void writeProducts(ostream & out, Product *& products, const int productsCount)
{
    for (int i = 0; i < productsCount; i++) {
        writeProduct(out, products[i]);
        out << endl << "=========================";

        if (!(i == productsCount - 1)) {
            out << endl << endl;
        }
    }
}

bool saveProducts(const char * filename, Product *& products, const int productsCount)
{
    ofstream fout(filename);

    if (!fout.is_open()) {
        return false;
    }

    writeProducts(fout, products, productsCount);
    fout.close();

    return true;
}

void addProduct(Product *& products, int & productsCount)
{
    Product * newProducts = new Product[productsCount + 1];

    for (int i = 0; i < productsCount; i++) {
        newProducts[i] = products[i];
    }

    cout << "Введіть назву продукту: ";
    cin >> newProducts[productsCount].name;

    cout << "Введіть ціну продукту: ";
    cin >> newProducts[productsCount].price;

    cout << "Введіть кількість продукту: ";
    cin >> newProducts[productsCount].quantity;

    cout << "Введіть виробника продукту: ";
    cin >> newProducts[productsCount].manufacturer;

    delete[] products;
    products = newProducts;
    productsCount++;
}

void printProducts(Product *& products, const int productsCount)
{
    for (int i = 0; i < 64; i++) {
        std::cout << "-";
    }

    cout << endl << left
         << setw(3)  << "|" 
         << setw(20) << "Продукт"
         << setw(3)  << "|" 
         << setw(15) << "Ціна"
         << setw(3)  << "|" 
         << setw(22) << "Кількість"
         << setw(3)  << "|" 
         << setw(22) << "Виробник" 
         << "|" << endl;
    
    for (int i = 0; i < productsCount; i++) {
        cout << left
             << setw(3)  << "|" 
             << setw(13) << products[i].name
             << setw(3)  << "|" 
             << setw(11) << products[i].price
             << setw(3)  << "|" 
             << setw(13) << products[i].quantity
             << setw(3)  << "|" 
             << setw(14) << products[i].manufacturer
             << "|" << endl;
    }

    for (int i = 0; i < 64; i++) {
        std::cout << "-";
    }
}

void readProduct(istream & in, Product & product)
{
    string str;

    in >> str;
    in >> product.name;

    in >> str;
    in >> product.price;

    in >> str;
    in >> product.quantity;

    in >> str;
    in >> product.manufacturer;

    in >> str;
}

Product * readProducts(istream & in, int & productsCount)
{
    productsCount = 0;
    Product * products = new Product[99999];

    for (int i = 0; !in.eof(); i++) {
        readProduct(in, products[productsCount]);
        productsCount++;
    }

    return products;
}

Product * loadProducts(const char * filename, int & productsCount)
{
    ifstream fin(filename);

    if (!fin.is_open()) {
        return nullptr;
    }

    Product * products = readProducts(fin, productsCount);
    fin.close();

    return products;
}

Product findHQProduct(Product *& products, const int productsCount)
{
    int highestQIndex = 0;
    
    for (int i = 0; i < productsCount; i++) {
        if (products[i].quantity > products[highestQIndex].quantity) {
            highestQIndex = i;
        }
    }
    return products[highestQIndex];
}