#include <iostream>
using namespace std;

int main() {
    const int rows = 5, cols = 5;
    char seats[rows][cols];
    
    // Initialize all seats with '0' (available)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            seats[i][j] = '0';
        }
    }
    
    int choice;
    do {
        cout << "\n===== Professional Event Seating System =====\n";
        cout << "1. Reserve a Seat\n";
        cout << "2. Count each type of Professional\n";
        cout << "3. Count Available Seats\n";
        cout << "4. Show Seat Matrix\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 1) {
            int r, c;
            char prof;
            cout << "Enter Row (1-5): ";
            cin >> r;
            cout << "Enter Column (1-5): ";
            cin >> c;
            
            // Convert to 0-based index
            r--; c--;
            
            if (r < 0 || r >= rows || c < 0 || c >= cols) {
                cout << "Invalid seat number!\n";
            }
            else if (seats[r][c] != '0') {
                cout << "Seat already reserved!\n";
            }
            else {
                cout << "Enter Professional Type (F = Finance, M = Marketing, E = Engineering): ";
                cin >> prof;
                if (prof == 'F' || prof == 'M' || prof == 'E') {
                    seats[r][c] = prof;
                    cout << "Seat Reserved Successfully!\n";
                } else {
                    cout << "Invalid Professional Type!\n";
                }
            }
        }
        else if (choice == 2) {
            int finance = 0, marketing = 0, engineering = 0;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (seats[i][j] == 'F') finance++;
                    if (seats[i][j] == 'M') marketing++;
                    if (seats[i][j] == 'E') engineering++;
                }
            }
            cout << "Finance: " << finance << endl;
            cout << "Marketing: " << marketing << endl;
            cout << "Engineering: " << engineering << endl;
        }
        else if (choice == 3) {
            int available = 0;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (seats[i][j] == '0') available++;
                }
            }
            cout << "Total Available Seats: " << available << endl;
        }
        else if (choice == 4) {
            cout << "\nSeat Matrix:\n";
            cout << "  1 2 3 4 5\n";
            for (int i = 0; i < rows; i++) {
                cout << i + 1 << " ";
                for (int j = 0; j < cols; j++) {
                    cout << seats[i][j] << " ";
                }
                cout << endl;
            }
        }
    } while (choice != 5);
    
    return 0;
}