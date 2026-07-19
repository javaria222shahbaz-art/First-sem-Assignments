#include <iostream>
using namespace std;

// Function using pointers (call by reference)
void calculateExpenses(int *arr, int size, int *total, float *average) {
    *total = 0;
    for (int i = 0; i < size; i++) {
        *total += *(arr + i);
    }
    *average = (float)(*total) / size;
}

int main() {
    int expenses[5] = {500, 700, 600, 800, 400};
    int total;
    float average;
    
    calculateExpenses(expenses, 5, &total, &average);
    
    cout << "Total Expenditure: " << total << endl;
    cout << "Average Spending per Person: " << average << endl;
    
    return 0;
}