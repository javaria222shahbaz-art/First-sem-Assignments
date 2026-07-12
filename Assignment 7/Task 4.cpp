#include <iostream>
using namespace std;

// Iterative function for rabbit population (Fibonacci-like growth)
long long r_pop(long long i_pairs, int months) {
    if (months == 0) return i_pairs;
    if (months == 1) return i_pairs * 2;
    
    long long prev1 = i_pairs * 2; // Month 1
    long long prev2 = i_pairs;     // Month 0
    long long current = 0;
    
    for (int i = 2; i <= months; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main() {
    long long i_pairs;
    int months;
    
    cout << "ENTER INITIAL NUMBER OF RABBIT PAIRS = ";
    cin >> i_pairs;
    cout << "ENTER NUMBER OF MONTHS = ";
    cin >> months;
    
    if (i_pairs < 0 || months < 0 || months > 40) {
        cout << "INVALID INPUT! NUMBERS MUST BE POSITIVE AND MONTHS <= 40!" << endl;
        return 1;
    }
    
    long long pop = r_pop(i_pairs, months);
    cout << "AFTER " << months << " MONTHS, RABBIT POPULATION = " << pop << " PAIRS" << endl;
    
    return 0;
}