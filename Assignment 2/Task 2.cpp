#include<iostream>
using namespace std;

int main() {
    cout << "Welcome to the World Travel Planner\n";
    float m, km;
    cout << "Enter distance in miles = ";
    cin >> m;

    km = m * 1.60934; // Using accurate conversion multiplier

    cout << "Converted distance:" << endl;
    cout << "------------------" << endl;
    cout << "Your Traveling Distance in km = " << km << endl;

    return 0;
}