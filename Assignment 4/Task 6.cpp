#include <iostream>
using namespace std;

int main() {
    int n;
    double wage, hours, pay;
    
    cout << " Enter number of employees: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cout << "\n Employee " << i << ":\n";
        cout << " Hourly wage: ";
        cin >> wage;
        cout << " Hours worked: ";
        cin >> hours;
        
        pay = wage * hours; // Fixed typo from original document source
        cout << " Weekly pay = $" << pay << "\n";
    }
    
    return 0;
}