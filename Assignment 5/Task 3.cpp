#include <iostream>
using namespace std;

int main() {
    int size, choice;
    
    cout << "Welcome to the Star Pattern Generator" << endl;
    cout << "Enter the size of star pattern: ";
    cin >> size;
    
    cout << "\n Choose Pattern Type\n";
    cout << "1 = Filled Stars\n";
    cout << "2 = Hollow Stars\n";
    cout << "3 = Pyramid Stars\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Filled Star Pattern\n";
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << " * ";
            }
            cout << endl;
        }
    }
    else if (choice == 2) {
        cout << "Hollow Star Pattern\n";
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
                    cout << " * ";
                else
                    cout << "   ";
            }
            cout << endl;
        }
    }
    else if (choice == 3) {
        cout << "Pyramid Star Pattern\n";
        for (int i = 1; i <= size; i++) {
            // Print leading spaces
            for (int j = i; j < size; j++) {
                cout << " ";
            }
            // Print stars
            for (int k = 1; k <= (2 * i - 1); k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else {
        cout << "Invalid Choice! Please Enter 1, 2, or 3.\n";
    }
    
    return 0;
}