#include <iostream>
#include <string>
using namespace std;

int main() {
    string subjects;
    
    for (int d = 1; d <= 5; d++) {
        cout << "Day = " << d << endl;
        for (int p = 1; p <= 6; p++) {
            cout << "Enter subject for periods = " << p << endl;
            cin >> subjects;
            cout << "Day " << d << " Period " << p << ": " << subjects << endl;
        }
    }
    return 0;
}