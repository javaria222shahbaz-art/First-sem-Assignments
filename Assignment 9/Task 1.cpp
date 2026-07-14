#include<iostream>
using namespace std;

int main() {
    int prod, loc;
    cout << "Enter number of products(rows): ";
    cin >> prod;
    cout << "Enter number of locations(columns) : ";
    cin >> loc;
    
    int matrix_A[100][100], matrix_B[100][100];
    
    cout << "Enter inventory for current month(Matrix A): " << endl;
    for (int i = 0; i < prod; i++) {
        for (int j = 0; j < loc; j++) {
            cout << "Product " << i+1 << ", Location " << j+1 << " : ";
            cin >> matrix_A[i][j];
        }
    }
    
    cout << "Enter inventory for previous month(Matrix B): " << endl;
    for (int i = 0; i < prod; i++) {
        for (int j = 0; j < loc; j++) {
            cout << "Product " << i+1 << ", Location " << j+1 << " : ";
            cin >> matrix_B[i][j];
        }
    }
    
    cout << "\nConsolidated Inventory (current + previous month): " << endl;
    for (int i = 0; i < prod; i++) {
        for (int j = 0; j < loc; j++) {
            cout << matrix_A[i][j] + matrix_B[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}