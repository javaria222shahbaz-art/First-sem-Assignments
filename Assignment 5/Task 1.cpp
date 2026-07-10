#include <iostream>
#include <string>
using namespace std;

int main() {
    int dep, sal;
    string name, designation;
    
    cout << " Enter number of departments: ";
    cin >> dep;
    
    // Outer loop to handle multiple departments
    for (int d = 1; d <= dep; d++) {
        int sum = 0; // Reset sum for each department
        cout << "\n--- Department " << d << " ---" << endl;
        
        for (int i = 1; i <= 10; i++) {
            cout << "\n For Employee " << i << endl;
            cout << " Enter Name: ";
            cin >> name;
            cout << " Enter Designation : ";
            cin >> designation;
            cout << " Enter Salary: ";
            cin >> sal;
            
            sum += sal;
        }
        cout << "\n Total salary paid for Department " << d << " = " << sum << endl;
    }  
    return 0;
}
