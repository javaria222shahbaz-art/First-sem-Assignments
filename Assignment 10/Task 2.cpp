#include<iostream>
#include<string>
using namespace std;

int main() {
    string msg1, msg2;
    cout << "Finding the shortest message." << endl;
    cout << "Enter 1st message: ";
    getline(cin, msg1);
    cout << "Enter 2nd message: ";
    getline(cin, msg2);
    
    int len1 = msg1.length();
    int len2 = msg2.length();
    
    if (len1 < len2) {
        cout << "Shorter message: " << msg1 << endl;
    }
    else if(len2 < len1) {
        cout << "Shorter message: " << msg2 << endl;
    }
    else {
        cout << "Equal" << endl;
    }
    return 0;
}