#include <iostream>
#include <algorithm> // For std::min and std::max
using namespace std;

// Function to find smallest and largest for two numbers
void compareTwo(int num1, int num2) {
    cout << "\nIn first Two Numbers," << endl;
    cout << "Smallest: " << min(num1, num2) << endl;
    cout << "Largest: " << max(num1, num2) << endl;
}

// Function to find smallest and largest for three numbers
void compareThree(int num1, int num2, int num3) {
    cout << "\nIn first Three Numbers," << endl;
    cout << "Smallest: " << min({num1, num2, num3}) << endl;
    cout << "Largest: " << max({num1, num2, num3}) << endl;
}

// Function to find smallest and largest for four numbers
void compareFour(int num1, int num2, int num3, int num4) {
    cout << "\nIn four Numbers," << endl;
    cout << "Smallest: " << min({num1, num2, num3, num4}) << endl;
    cout << "Largest: " << max({num1, num2, num3, num4}) << endl;
}

int main() {
    int num1, num2, num3, num4;
    cout << "Enter Four Positive Numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    
    // Input validation
    if (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0) {
        cout << "All numbers must be positive." << endl;
        return 1;
    }
    
    compareTwo(num1, num2);
    compareThree(num1, num2, num3);
    compareFour(num1, num2, num3, num4);
    
    return 0;
}