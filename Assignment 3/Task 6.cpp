#include<iostream> 
using namespace std;

int main() {
    float temp;
    cout << "Enter the Temperature in Celsius = ";
    cin >> temp;
    
    if (temp < 36.5) {
        cout << "Hypothermia" << endl;
    }
    else if (temp >= 36.5 && temp <= 37.5) {
        cout << "Normal Body Temperature" << endl;
    }
    else if (temp >= 37.6 && temp <= 38.5) {
        cout << "Low Grade Fever" << endl;
    }
    else if (temp > 38.5) {
        cout << "High Fever" << endl;
    }
    
    return 0;
}