#include <iostream>
using namespace std;

int main() {
    int ratings[10];
    cout << "Enter 10 integer ratings:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Rating " << i + 1 << ": ";
        cin >> ratings[i];
    }
    cout << "Ratings in reverse order:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << ratings[i] << " ";
    }
    cout << endl;
    
    return 0;
}
