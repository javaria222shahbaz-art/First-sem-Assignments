#include <iostream>
using namespace std;

// Function to exchange keys using pointers
void exchangeKeys(int *key1, int *key2) {
    int temp;
    // Open containers (access keys)
    temp = *key1;
    *key1 = *key2;
    *key2 = temp;
    // Containers closed with exchanged keys
}

int main() {
    int container1Key = 101;
    int container2Key = 202;
    
    cout << "Before Exchange:" << endl;
    cout << "Container 1 Key: " << container1Key << endl;
    cout << "Container 2 Key: " << container2Key << endl;
    
    // Call function using call by reference
    exchangeKeys(&container1Key, &container2Key);
    
    cout << "\nAfter Exchange:" << endl;
    cout << "Container 1 Key: " << container1Key << endl;
    cout << "Container 2 Key: " << container2Key << endl;
    cout << "\nKey exchange successful. Containers are secured with new keys." << endl;
    
    return 0;
}