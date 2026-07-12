#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3, a4, a5;
    
    while (true) {
        cout << "\nEnter 5 numbers: ";
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        
        // Ensure no zeros are tracking inside the current record bounds
        if (a1 != 0 && a2 != 0 && a3 != 0 && a4 != 0 && a5 != 0) {
            cout << "\nNo zero found!\n";
            cout << "Numbers are: " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
            break;
        } else {
            cout << "Zero found! Enter again.\n";
        }
    }
    return 0;
}
