#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

void swapStudents(Student* s1, Student* s2) {
    Student temp = *s1; // Copy student 1 data to temp
    *s1 = *s2;          // Copy student 2 data to student 1
    *s2 = temp;         // Copy temp (original student 1) to student 2
}

int main() {
    Student student1 = {"Alice", 16, 85.5};
    Student student2 = {"Bob", 17, 90.0};
    
    cout << "Before swap:" << endl;
    cout << student1.name << " - " << student1.age << " - " << student1.grade << endl;
    cout << student2.name << " - " << student2.age << " - " << student2.grade << endl;
    
    // Swap using pointers
    swapStudents(&student1, &student2);
    
    cout << "\nAfter swap:" << endl;
    cout << student1.name << " - " << student1.age << " - " << student1.grade << endl;
    cout << student2.name << " - " << student2.age << " - " << student2.grade << endl;
    
    return 0;
}