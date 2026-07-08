#include<iostream>
using namespace std;

int main() {
    int items, quantity;
    float price, total = 0; // Initialized total to 0 to prevent garbage values
    
    cout << " Enter the number of items = ";
    cin >> items;
    
    for(int i = 1; i <= items; ++i) {
        cout << "\n Items " << i << ": \n";
        cout << " Enter price per unit $ = ";
        cin >> price;
        cout << " Enter quantity in stock = ";
        cin >> quantity;
        
        total += price * quantity;
    }
    
    cout << "\n Total inventory value $ = " << total << endl;
    return 0;
}