#include "navigation.h"
#include "utility.h"

void mainMenu(
    string & fileName, 
    bool & fileLoaded, 
    bool & changesSaved,
    int & productsCount, 
    Product *& products
) {
    cout << "╔====================[" << MAGENTA << "Головне Меню" << WHITE << "]=====================╗"          << endl;

    cout << "║ Поточний файл: " 
         << (fileLoaded ? GREEN : GREY)
         << (fileLoaded ? fileName : "Не завантажено") << WHITE 
         << (fileLoaded ? string(39 - fileName.length(), ' ') : string(25, ' ')) << "║"                          << endl;

    cout << WHITE << "║ Зміни: " 
         << (changesSaved ? GREEN : RED)  
         << (changesSaved ? "✅ Збережено" : "❌ Не збережено") << WHITE 
         << (changesSaved ? string(35, ' ') : string(32, ' ')) << "║"                                            << endl;

    cout << "║                                                       ║"                                          << endl;
    cout << WHITE << "║ " << BLUE << "[0] " << WHITE << "Завантажити дані з файлу.                         ║"    << endl;
    cout << WHITE << "║ " << BLUE << "[1] " << WHITE << "Зберегти поточні дані в файл.                     ║"    << endl;
    cout << WHITE << "║ " << BLUE << "[2] " << WHITE << "Переглянути завантажені дані.                     ║"    << endl;
    cout << WHITE << "║ " << BLUE << "[3] " << WHITE << "Додати товар в поточні дані.                      ║"    << endl;
    cout << WHITE << "║ " << BLUE << "[4] " << WHITE << "Очистити дані.                                    ║"    << endl;
    cout << WHITE << "║ " << BLUE << "[5] " << WHITE << "Обчислити вартість товару з найбільшою кількістю. ║"    << endl;
    cout << WHITE << "║ " << RED  << "[6] " << WHITE << "Вихід.                                            ║"    << endl;
    cout << "╚=======================================================╝"                                          << endl;
    cout << endl << "Введіть бажану дію: ";
    
    int action;
    cin >> action;

    switch (action)
    {
        case 0:
            system("cls");
            return loadProductsMenu(fileName, fileLoaded, changesSaved, productsCount, products);
        case 1:
            system("cls");
            return saveProductsMenu(fileName, fileLoaded, changesSaved, productsCount, products);
        case 2:
            system("cls");
            return printProductsMenu(fileName, fileLoaded, changesSaved, productsCount, products);
        case 3:
            system("cls");
            return addProductMenu(fileName, fileLoaded, changesSaved, productsCount, products);
        case 4:
            system("cls");
            return clearProductsMenu(fileName, fileLoaded, changesSaved, productsCount, products);
        case 5:
            system("cls");
            return highestQuantityMenu(fileName, fileLoaded, changesSaved, productsCount, products);
        case 6:
            system("cls");
            cout << "До побачення!";

            delete[] products;
            return;
        default:
            system("cls");
            cout << "Невідома дія!";
            return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
    }
}

void loadProductsMenu(
    string & fileName, 
    bool & fileLoaded, 
    bool & changesSaved,
    int & productsCount,
    Product *& products
) {
    cout << "╔=================[" << MAGENTA << "Завантаження даних" << WHITE << "]==================╗"          << endl;
    cout << "║ Поточний файл: " 
         << (fileLoaded ? GREEN : GREY) 
         << fileName << WHITE
         << string(39 - fileName.length(), ' ') << "║"                                                           << endl;

    cout << WHITE << "║ Завантажено: " 
         << (fileLoaded ? GREEN : RED)  
         << (fileLoaded ? "✅ Так" : "❌ Ні") << WHITE 
         << (fileLoaded ? string(35, ' ') : string(36, ' ')) << "║"                                              << endl;

    cout << "╚=======================================================╝"                                          << endl;

    cout << endl << "Введіть назву файлу (Enter для products.txt): ";

    cin.ignore();
    getline(cin, fileName);

    if (fileName.empty()) {
        fileName = "products.txt";
    }

    delete[] products;
    products = loadProducts(fileName.c_str(), productsCount);

    if (!products) {
        cout << RED << "Помилка завантаження даних!" << endl;
        delete[] products;
        return;
    }
    fileLoaded = true;

    system("cls");
    return mainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
}

void saveProductsMenu(
    string & fileName, 
    bool & fileLoaded, 
    bool & changesSaved,
    int & productsCount,
    Product *& products
) {
    if (!fileLoaded || !products) {
        cout << RED <<"Дані відсутні, нема що зберігати!" << WHITE;
        return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
    }

    bool success = saveProducts(fileName.c_str(), products, productsCount);

    if (!success) {
        cout << RED << "Помилка збереження даних!" << endl;
        delete[] products;
        return;
    }
    changesSaved = true;

    return mainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
}

void printProductsMenu(
    string & fileName, 
    bool & fileLoaded, 
    bool & changesSaved,
    int & productsCount,
    Product *& products
) {
    if (!fileLoaded || !products) {
        cout << RED << "Для перегляду даних вам спочатку необхідно завантажити їх!" << WHITE;
        return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
    }

    printProducts(products, productsCount);

    return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
}

void addProductMenu(
    string & fileName, 
    bool & fileLoaded, 
    bool & changesSaved,
    int & productsCount,
    Product *& products
) {
    if (!fileLoaded || !products) {
        cout << RED << "Щоб додати продукт вам спочатку необхідно завантажити файл!" << WHITE;
        return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
    }
    addProduct(products, productsCount);

    cout << endl << GREEN << "Продукт успішно додано!" << WHITE;
    changesSaved = false;
    
    return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
}

void clearProductsMenu(
    string & fileName, 
    bool & fileLoaded, 
    bool & changesSaved,
    int & productsCount,
    Product *& products
) {
    if (!fileLoaded || !products) {
        cout << RED << "Щоб очистити дані вам спочатку необхідно завантажити файл!" << WHITE;
        return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
    }

    delete[] products;
    productsCount = 0;
    products = nullptr;

    changesSaved = false;

    cout << endl << GREEN << "Дані очищено." << WHITE;
    
    return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
}

void highestQuantityMenu(
    string & fileName, 
    bool & fileLoaded, 
    bool & changesSaved,
    int & productsCount,
    Product *& products
) {
    if (!fileLoaded || !products) {
        cout << RED << "Щоб виконувати пошук вам спочатку необхідно завантажити файл!" << WHITE;
        return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
    }

    Product product = findHQProduct(products, productsCount);

    cout << "Товар з найбільшою кількістю (x" 
         << GREY << product.quantity << WHITE << "): " 
         << GREEN << product.name 
         << endl;

    cout << WHITE << "Його сумарна вартість: " 
         << GREEN << product.quantity * product.price 
         << WHITE;
    
    return enterToMainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
}

void enterToMainMenu(
    string & fileName, 
    bool & fileLoaded, 
    bool & changesSaved,
    int & productsCount,
    Product *& products
) {
    cout << endl << endl << GREY << "Натисніть Enter, щоб повернутись в головне меню..." << WHITE;

    cin.ignore();
    cin.get();

    system("cls");
    return mainMenu(fileName, fileLoaded, changesSaved, productsCount, products);
}