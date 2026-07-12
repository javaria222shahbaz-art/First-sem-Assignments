#include <iostream>
using namespace std;

int main() {
    int ratings[10];
    
    // Capture user survey ratings
    cout << "Enter 10 integer ratings:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Rating " << i + 1 << ": ";
        cin >> ratings[i];
    }
    
    // Output structural matrix configuration tracking backwards safely
    cout << "Ratings in reverse order:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << ratings[i] << " ";
    }
    cout << endl;
    
    return 0;
}