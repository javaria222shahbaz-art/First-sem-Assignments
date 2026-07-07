#include<iostream>
using namespace std;

int main() {
    int r, seats = 35;
    cout << "Welcome to the Seats Reservation System!" << endl;
    cout << "How many seats you want to reserve = ";
    cin >> r;
    
    if (r > seats || r < 0) {
        cout << "Sorry! There are not enough seats available." << endl;
    }
    else {
        cout << "Your seats have been reserved.\n Enjoy your journey!" << endl;
        cout << "Reserved Seats = " << r << endl;
        cout << "Remaining Seats = " << seats - r << endl; // Corrected expression from original document logic 'seats--r'
    }
    
    return 0;
}