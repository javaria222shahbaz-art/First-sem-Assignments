#include<iostream> 
using namespace std;

int main() {
    int total, discount;
    cout << "Enter the Total Purchase Amount in Rupees = ";
    cin >> total;
    
    if (total > 15000) {
        discount = total * 0.1;
        total = total - discount;
        cout << "Congratulations! You get a 10% discount" << endl;
        cout << "Discount Amount: " << total << " Rupees"; // Note: The original output string labels the final total as "Discount Amount"
    }
    
    return 0;
}