#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    string address;
    int phoneNumber;
};

int main() {
    Customer customer;
    cout << "Enter customer name: ";
    getline(cin, customer.name);
    cout << "Enter customer address: ";
    getline(cin, customer.address);
    cout << "Enter customer phone number: ";
    cin >> customer.phoneNumber;
    string searchCustomerName;
    cout << "\nEnter a customer name to search: ";
    getline(cin, searchCustomerName);
    if (searchCustomerName == customer.name) {
        cout << "\nCustomer Information:\n";
        cout << "Name: " << customer.name << "\n";
        cout << "Address: " << customer.address << "\n";
        cout << "Phone Number: " << customer.phoneNumber << "\n";
    }
    else {
        cout << "\nCustomer not found.\n";
    }

    return 0;
}