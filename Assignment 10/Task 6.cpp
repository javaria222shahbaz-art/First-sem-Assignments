#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    bool newWord = true; 
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            newWord = true; 
        } else if (newWord) {
            if (sentence[i] >= 'a' && sentence[i] <= 'z') {
                sentence[i] = sentence[i] - ('a' - 'A'); // ASCII shift to uppercase
            }
            newWord = false;
        }
    }
    
    cout << "\nFormatted Sentence:\n" << sentence << endl;
    return 0;
}