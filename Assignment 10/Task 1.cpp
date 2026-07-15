#include<iostream>
#include<string>
using namespace std;

int main() {
    string message, oldword, newword;
    cout << "Enter your message: ";
    getline(cin, message);
    cout << "Enter the word to change: ";
    cin >> oldword;
    cout << "Enter the new word: ";
    cin >> newword;
    
    size_t pos = message.find(oldword);
    if (pos != string::npos) {
        message.replace(pos, oldword.length(), newword);
        cout << " Updated message: " << message << endl;
    }
    else {
        cout << "Word not found in the message!" << endl;
    }
    return 0;
}