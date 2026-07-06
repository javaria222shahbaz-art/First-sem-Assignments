#include<iostream>
#include<string>
using namespace std;

int main() {
    string name, about_me;
    int age;
    float height;

    cout << "Name = ";
    cin >> name;
    cout << "Age = ";
    cin >> age;
    cout << "Height = ";
    cin >> height;
    cin.ignore(); // Clear the buffer before taking multi-line string
    cout << "About Me = ";
    getline(cin, about_me);

    cout << "\n\t Personal Info \n--------------------\n";
    cout << "Name : " << name << endl;
    cout << "Age : " << age << " years" << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "About Me: " << about_me << endl;

    return 0;
}