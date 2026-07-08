#include <iostream>
using namespace std;

int main() {
    int no, sum = 0, count;
    cout << "Enter 10 integers:\n";
    
    for (int i = 1; i <= 10; i++) {
        cout << "Number " << i << " ";
        cin >> no;
        
        count = 0;
        if (no > 1) {
            for (int j = 1; j <= no; j++) {
                if (no % j == 0) {
                    count++;
                }
            }
            // Corrected original logic flaw (count=2 assignment) to a proper equality check (count == 2)
            if (count == 2) {
                sum += no;
            }
        }
    }
    
    cout << "Sum of prime numbers = " << sum << endl;
    return 0;
}