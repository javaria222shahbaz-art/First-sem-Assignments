#include<iostream> 
using namespace std;

int main() {
    int age1, age2, age3;
    cout << "Enter the age of friend 1: ";
    cin >> age1;
    cout << "Enter the age of friend 2: ";
    cin >> age2;
    cout << "Enter the age of friend 3: ";
    cin >> age3;
    
    cout << "---------\n";
    if (age1 <= age2 && age1 <= age3) {
        cout << "Friend 1 is youngest with age " << age1 << endl;
    }
    else if (age2 <= age1 && age2 <= age3) {
        cout << "Friend 2 is youngest with age " << age2 << endl;
    }
    else {
        cout << "Friend 3 is youngest with age " << age3 << endl;
    }
    
    return 0;
}