#include<iostream>
using namespace std;

int main() {
    int no, i, limit;
    
    do {
        cout << " Enter the number = ";
        cin >> no;
    } while (no <= 0);
    
    do {
        cout << " Enter the limit = ";
        cin >> limit;
    } while (limit <= 1);
    
    cout << " The table of " << no << " is as under: " << endl;
    for(i = 1; i <= limit; i++) {
        cout << "\t" << no << " * " << i << " = " << i * no << endl;
    }
    
    return 0;
}