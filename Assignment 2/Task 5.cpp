#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<limits>
using namespace std;

int main() {
    cout << "Enter laboratories - Billing system\n\n";
    int n;
    cout << "How many services will you enter ? ";
    cin >> n;

    string service;
    int q;
    float f;
    float gt = 0;

    cout << "\n Enter the details for each service : \n";
    for (int i = 1; i <= n; i++) {
        cout << "\n Service " << i << " Description : ";
        cin >> service;
        cout << "Quantity: ";
        cin >> q;
        cout << "Fee per unit : ";
        cin >> f;

        float total = q * f;
        cout << "Total cost for " << service << " : " << total << "\n";
        gt += total;
    }

    cout << "\n===============================\n Receipt\n===============================\n";
    cout << "Subtotal (without tax) : " << gt << "\n";
    float tax = gt * 0.05;
    cout << "Tax (5%) : " << tax << "\n";
    float finaltotal = gt + tax;
    cout << "Final total (with tax): " << finaltotal << "\n";

    return 0;
}