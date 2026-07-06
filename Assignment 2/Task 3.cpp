#include<iostream>
using namespace std;

int main() {
    int b, wd, ts;
    cout << "Enter your total bank balance = ";
    cin >> b;
    cout << "withdraw amount = ";
    cin >> wd;
    cout << "transaction amount = ";
    cin >> ts;

    b = b - wd + ts;
    cout << "Your new bank balance = " << b << endl;

    return 0;
}