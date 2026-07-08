#include<iostream>
using namespace std;

int main() {
    int i, start, end;
    cout << "Start Value = ";
    cin >> start;
    cout << "End Value = ";
    cin >> end;
    
    for(i = start; i <= end; i++) {
        cout << "ASCII Value " << i << "\t Character Value " << char(i) << endl;
    }
    
    return 0;
}