#include <iostream>
#include <cmath>
using namespace std;

// add function
double add(double num1, double num2) {
    return num1 + num2;
}

// minus function
double subtract(double num1, double num2) {
    return num1 - num2;
}

// multiply function
double multiply(double num1, double num2) {
    return num1 * num2;
}

// divide function
double divide(double num1, double num2) {
    if (num2 == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return num1 / num2;
}

// power function
double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    float num1, num2;
    char op;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Select operation (+, -, *, /, ^): ";
    cin >> op;
    
    double result;
    switch (op) {
        case '+':
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0) {
                cout << "Result: " << result << endl;
            }
            break;
        case '^':
            result = power(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operation selected." << endl;
            break;
    }
    return 0;
}