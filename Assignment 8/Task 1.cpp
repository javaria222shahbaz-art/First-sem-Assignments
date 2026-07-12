#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, quantity;
    char moreitems, option;
    double total = 0.0, price = 0.0;
    double fee = 3.0;
    
    string ordername[10];
    int orderquantity[10];
    double orderprice[10];
    int count = 0;
    
    cout << "Welcome to the Online Store!" << endl;
    cout << "Menu\n";
    cout << "1. Burger    $5.99\n";
    cout << "2. Pizza     $8.49\n";
    cout << "3. Fries     $2.99\n";
    cout << "4. Soda      $1.99\n";
    cout << "5. Ice cream $3.50\n";
    
    do {
        cout << "Enter the item number you wish to order: ";
        cin >> choice;
        
        bool valid = true;
        switch (choice) {
            case 1:
                price = 5.99;
                ordername[count] = "Burger";
                break;
            case 2:
                price = 8.49;
                ordername[count] = "Pizza";
                break;
            case 3:
                price = 2.99;
                ordername[count] = "Fries";
                break;
            case 4:
                price = 1.99;
                ordername[count] = "Soda";
                break;
            case 5:
                price = 3.50;
                ordername[count] = "Ice cream";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                valid = false;
                break;
        }
        
        if (!valid) continue;
        
        cout << "Enter quantity: ";
        cin >> quantity;
        
        orderquantity[count] = quantity;
        orderprice[count] = price * quantity;
        total += orderprice[count];
        count++;
        
        cout << "Do you want to order more items? (y/n): ";
        cin >> moreitems;
    } while ((moreitems == 'y' || moreitems == 'Y') && count < 10);
    
    cout << "Choose delivery (d) or pickup (p): ";
    cin >> option;
    
    cout << "\nOrder Summary:\n";
    for (int i = 0; i < count; i++) {
        cout << orderquantity[i] << " x " << ordername[i] << " $" << orderprice[i] << "\n";
    }
    
    if (option == 'd' || option == 'D') {
        total += fee;
        cout << "Delivery fee: $" << fee << "\n";
    }
    
    cout << "Total amount due: $" << total << "\n";
    cout << "Thank you for shopping with us!\n";
    
    return 0;
}