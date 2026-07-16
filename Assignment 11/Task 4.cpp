#include <iostream>
#include <string>
using namespace std;

struct Patient {
    int id;
    string name;
    int age;
    string history;
};

const int MAX = 100;

void addPat(Patient* p, int& count) {
    Patient* ptr = &p[count];
    cout << "\nEnter Patient ID: ";
    cin >> ptr->id;
    cin.ignore();
    cout << "Enter Patient Name: ";
    getline(cin, ptr->name);
    cout << "Enter Age: ";
    cin >> ptr->age;
    cin.ignore();
    cout << "Enter Medical History: ";
    getline(cin, ptr->history);
    count++;
    cout << "Patient record added!\n";
}

void updatePat(Patient* p, int count) {
    int id;
    cout << "\nEnter Patient ID to update: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        Patient* ptr = &p[i];
        if (ptr->id == id) {
            cin.ignore();
            cout << "Enter Updated Name: ";   
            getline(cin, ptr->name);
            cout << "Enter Updated Age: ";
            cin >> ptr->age;
            cin.ignore();
            cout << "Enter Updated Medical History: ";
            getline(cin, ptr->history);
            cout << "Record updated successfully!\n";
            return;
        }
    }
    cout << "Patient with this ID not found!\n";
}

void dispPat(Patient* p, int count) {
    int id;
    cout << "\nEnter Patient ID to view details: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        Patient* ptr = &p[i];
        if (ptr->id == id) {
            cout << "\n---- Patient Information ----\n";
            cout << "ID: " << ptr->id << endl;
            cout << "Name: " << ptr->name << endl;
            cout << "Age: " << ptr->age << endl;
            cout << "Medical History: " << ptr->history << endl;
            return;
        }
    }
    cout << "Record not found!\n";
}

void delPat(Patient* p, int& count) {
    int id;
    cout << "\nEnter Patient ID to remove: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (p[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                p[j] = p[j + 1];
            }
            count--;
            cout << "Record deleted successfully!\n";
            return;
        }   
    }
    cout << "Patient not found!\n";
}

int main() {
    Patient patients[MAX];
    int count = 0;
    int choice;
    do {
        cout << "\n=== Hospital Management Menu ===\n";
        cout << "1. Add Patient\n";
        cout << "2. Update Patient\n";
        cout << "3. Display Patient\n";
        cout << "4. Delete Patient\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        
        switch (choice) {
            case 1: addPat(patients, count); break;
            case 2: updatePat(patients, count); break;
            case 3: dispPat(patients, count); break;
            case 4: delPat(patients, count); break;
            case 5: cout << "Closing system...\n"; break;
            default: cout << "Invalid selection!\n"; break;
        }
    } while (choice != 5);
    return 0;
}