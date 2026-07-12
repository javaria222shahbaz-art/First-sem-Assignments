#include <iostream>
using namespace std;

const double PI = 3.141592653589793; // More precise PI

// Function to calculate area of a circle
double area(double radius) {
    if (radius <= 0) {
        cout << "Radius must be positive." << endl;
        return 0;
    }
    return PI * radius * radius;
}

// Function to calculate area of a rectangle
double area(double length, double width) {
    if (length <= 0 || width <= 0) {
        cout << "Length and width must be positive." << endl;
        return 0;
    }
    return length * width;
}

// Function to calculate area of a triangle
double area(int base, int height) {
    if (base <= 0 || height <= 0) {
        cout << "Base and height must be positive." << endl;
        return 0;
    }
    return 0.5 * base * height;
}

int main() {
    int choice, base, height;
    double radius, length, width;
    
    cout << "Geometry Calculator\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter radius of the circle: ";
            cin >> radius;
            cout << "Area of Circle: " << area(radius) << endl;
            break;
        case 2:
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of Rectangle: " << area(length, width) << endl;
            break;
        case 3:
            cout << "Enter the base & height of the triangle: ";
            cin >> base >> height;
            cout << "Area of Triangle: " << area(base, height) << endl;
            break;
        default:
            cout << "Invalid choice. Please select between 1 and 3." << endl;
    }
    return 0;
}