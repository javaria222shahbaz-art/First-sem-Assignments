#include <iostream>
using namespace std;

// Iterative function to calculate Fibonacci for efficiency
long long fib(int n) {
    if (n <= 1) return n;
    
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter a positive number (0-40 for reasonable computation): ";
    cin >> n;
    
    if (n < 0 || n > 40) {
        cout << "Please enter a number between 0 and 40." << endl;
        return 1;
    }
    
    cout << "The Fibonacci number for " << n << " is: " << fib(n) << endl;
    return 0;
}