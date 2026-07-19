#include <iostream>
using namespace std;

// Function to arrange books in ascending order using pointers
void arrangeBooks(int *arr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            // Compare using pointers
            if (*(arr + i) > *(arr + j)) {
                // Swap heights
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int bookHeights[5] = {25, 18, 30, 20, 15};
    
    cout << "Before Arrangement:\n";
    for (int i = 0; i < 5; i++) {
        cout << bookHeights[i] << " ";
    }
    
    arrangeBooks(bookHeights, 5);
    
    cout << "\n\nAfter Arrangement (Ascending Order):\n";
    for (int i = 0; i < 5; i++) {
        cout << bookHeights[i] << " ";
    }
    cout << endl;
    
    return 0;
}