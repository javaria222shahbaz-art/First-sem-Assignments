#include <iostream>
using namespace std;

// Function to calculate power efficiently
long long power_f(long long base, int power) {
    if (power < 0) {
        cout << "Exponent must be non-negative." << endl;
        return 0; // Invalid case
    }
    
    long long result = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            result *= base;
        }
        base *= base;
        power /= 2;
    }
    return result;
}

int main() {
    long long base;
    int power;
    
    cout << "Enter the Base Number: ";
    cin >> base;
    cout << "Enter the Exponent (non-negative): ";
    cin >> power;
    
    long long res = power_f(base, power);
    cout << base << " raised to the power of " << power << " is " << res << endl;
    
    return 0;
}