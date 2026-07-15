#include<iostream>
#include<string>
using namespace std;

int main() {
    string str, cstr;
    cout << "Enter your string: ";
    getline(cin, str);
    
    // Perform copy operation
    cstr = str; 
    
    cout << "Your copied string is:\n " << cstr << endl;
    return 0;
}