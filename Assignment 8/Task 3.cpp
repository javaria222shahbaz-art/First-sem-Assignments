#include <iostream>
using namespace std;

int main() {
    int time[3]; // hours, minutes, seconds
    char direction;
    int rotateBy;
    
    // Input current time elements
    cout << "Enter Hours: ";
    cin >> time[0];
    cout << "Enter Minutes: ";
    cin >> time[1];
    cout << "Enter Seconds: ";
    cin >> time[2];
    
    // Ask direction and number of structural steps
    cout << "\nRotate time to Left (L) or Right (R)? ";
    cin >> direction;
    cout << "Rotate by how many positions (1-2)? ";
    cin >> rotateBy;
    
    cout << "\nOriginal Time Array: ";
    for (int i = 0; i < 3; i++) {
        cout << time[i] << " ";
    }
    
    int temp[3];
    
    // Process left bitwise shift mechanics
    if (direction == 'L' || direction == 'l') {
        for (int i = 0; i < 3; i++) {
            temp[i] = time[(i + rotateBy) % 3];
        }
        cout << "\nTime after rotating LEFT by " << rotateBy << " positions: ";
        for (int i = 0; i < 3; i++) {
            cout << temp[i] << " ";
        }
    }
    // Process right shift structural logic
    else if (direction == 'R' || direction == 'r') {
        for (int i = 0; i < 3; i++) {
            temp[(i + rotateBy) % 3] = time[i];
        }
        cout << "\nTime after rotating RIGHT by " << rotateBy << " positions: ";
        for (int i = 0; i < 3; i++) {
            cout << temp[i] << " ";
        }
    } else {
        cout << "\nInvalid choice!";
    }
    cout << endl;
    
    return 0;
}