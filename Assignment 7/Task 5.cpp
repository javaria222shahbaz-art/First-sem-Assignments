#include <iostream>
#include <algorithm> 
using namespace std;

template <typename T>
T maxTwo(T a, T b) {
    return max(a, b);
}

template <typename T>
T maxThree(T x, T y, T z) {
    return max({x, y, z});
}

int main() {
    int int1, int2;
    float num1, num2, num3;
    cout << "Enter two integer readings: ";
    cin >> int1 >> int2;
    cout << "The maximum of the two integers is: " << maxTwo(int1, int2) << endl;
 
    cout << "\nEnter three sensor readings (floating-point numbers): ";
    cin >> num1 >> num2 >> num3;
    cout << "The highest recorded sensor value is: " << maxThree(num1, num2, num3) << endl;
    
    return 0;
}
