#include <iostream>
using namespace std;

// Function to find the tallest person using pointers
void findTallest(int *heights, int size) {
    int tallestHeight = *heights; // First person's height
    int identity = 0;             // Index of tallest person
    
    for (int i = 1; i < size; i++) {
        if (*(heights + i) > tallestHeight) {
            tallestHeight = *(heights + i);
            identity = i;
        }
    }
    cout << "Tallest Person Height: " << tallestHeight << endl;
    cout << "Tallest Person Identity (Index): " << identity << endl;
}

int main() {
    int heights[6] = {160, 172, 168, 180, 175, 165};
    findTallest(heights, 6);
    return 0;
}