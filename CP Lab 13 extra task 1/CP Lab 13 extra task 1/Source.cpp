#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    int price;
    int quantity;
};

int main() {
    Product product;
    cout << "Enter product name: ";
    getline(cin, product.name);
    cout << "Enter product price: ";
    cin >> product.price;
    cout << "Enter quantity in stock: ";
    cin >> product.quantity;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string searchProductName;
    cout << "\nEnter a product name to search: ";
    getline(cin, searchProductName);
    if (searchProductName == product.name) {
        cout << "\nProduct Information:\n";
        cout << "Name: " << product.name << "\n";
        cout << "Price: $" << product.price << "\n";
        cout << "Quantity in stock: " << product.quantity << "\n";
    }
    else {
        cout << "\nProduct not found.\n";
    }

    return 0;
}