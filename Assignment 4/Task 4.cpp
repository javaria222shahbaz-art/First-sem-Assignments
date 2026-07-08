#include<iostream>
using namespace std;

int main() {
    int n, score;
    cout << "Welcome to the Academic Excellence Award Ceremony !" << endl;
    cout << "Enter the number of students receiving awards :";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cout << "Student " << i << "\n How many problems did they solve correctly? = ";
        cin >> score;
        
        int fact = 1; // Initialized inside the loop so it resets for each student
        for(int j = 1; j <= score; j++) {
            fact = fact * j;
        }
        
        cout << "The factorial values corresponding to each student :" << endl;
        cout << "Students " << i << ": " << score << "! = " << fact << endl;
    }
    
    return 0;
}