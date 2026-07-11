#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string vehicle;
    string license;
    
    cout << " Driving Eligibility Checker" << endl;
    cout << " Enter your age: ";
    cin >> age;
    cout << " Enter the type of vehicle you want to drive (car/motorcycle): ";
    cin >> vehicle;
    cout << " Do you have a valid driving license? (yes/no): ";
    cin >> license;
    
    if (vehicle == "car") { // Fixed assignment operators to conditional equivalents
        if (age >= 18 && license == "yes") {
            cout << " You are eligible to drive a car." << endl;
        } else {
            cout << " You are not eligible to drive." << endl;
        }
    } else if (vehicle == "motorcycle") {
        if (age >= 16 && license == "yes") {
            cout << " You are eligible to drive a motorcycle." << endl;
        } else {
            cout << " You are not eligible to drive." << endl;
        }
    } else {
        cout << " Invalid vehicle type entered." << endl;
    }
    return 0;
}