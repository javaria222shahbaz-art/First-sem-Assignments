#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

string formatUsername(string username) {
    for (size_t i = 0; i < username.length(); i++) {
        username[i] = toupper(username[i]);
        if (username[i] == ' ') {
            username[i] = '_';
        }
    }
    reverse(username.begin(), username.end());
    return username;
}

int main() {
    string name;
    cout << "Enter your username: ";
    getline(cin, name);
    
    string finalName = formatUsername(name);
    cout << "Formatted Username: " << finalName << endl;
    return 0;
}