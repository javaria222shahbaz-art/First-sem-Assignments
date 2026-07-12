#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    string products[SIZE] = { "Apples", "Oranges", "Bananas", "Bread", "Milk" };
    int quantities[SIZE] = { 100, 80, 60, 50, 100 };
    char choice = 'Y';
    
    cout << "---- Grocery Store Inventory Restocking ----\n";
    
    while (choice == 'Y' || choice == 'y') {
        string name;
        int amount;
        bool found = false;
        
        cout << "\nEnter the product name to restock: ";
        cin >> name;
        
        // Search product array
        for (int i = 0; i < SIZE; i++) {
            if (name == products[i]) {
                found = true;
                cout << "Enter the quantity to restock: ";
                cin >> amount;
                
                if (amount <= 0) {
                    cout << "\nError: Invalid quantity. Please enter a positive number.\n";
                } else {
                    quantities[i] += amount;
                    cout << "\nProduct '" << name << "' successfully restocked with " << amount << " units.\n";
                }
                break;
            }
        }
        
        if (!found) {
            cout << "\nError: Product " << name << " not found in inventory. Please enter a valid product name.\n";
        }
        
        // Display current inventory status
        cout << "\nCurrent Inventory:\n";
        for (int i = 0; i < SIZE; i++) {
            cout << i + 1 << ". " << products[i] << ": " << quantities[i] << " units\n";
        }
        
        cout << "\nWould you like to restock another product? (Y/N): ";
        cin >> choice;
    }
    
    cout << "\nExiting the program. Thank you!\n";
    return 0;
}