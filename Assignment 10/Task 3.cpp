#include<iostream>
#include<string>
using namespace std;

int main() {
    string r1, r2, r3, r4;
    cout << "Enter your 1st response: ";
    getline(cin, r1);
    cout << "Enter your 2nd response: ";
    getline(cin, r2);
    cout << "Enter your 3rd response: ";
    getline(cin, r3);
    cout << "Enter your 4th response: ";
    getline(cin, r4);
    
    cout << "The complete response is: \n" << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
    return 0;
}