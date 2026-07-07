#include<iostream> 
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    // check if it is a digit (characters '0' to '9')
    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit.\n";
    }
    // check if it is a vowel (both lower and uppercase)
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel.\n";
    }
    // check if it is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a consonant.\n";
    }
    else {
        cout << "Invalid";
    }
    
    return 0;
}