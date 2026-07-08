#include<iostream>
using namespace std;

int main()
{
    int salary;
    cout << "enter salary" << endl;
    cin >> salary;
    
    if(salary >= 200000)
        cout << "manager" << endl;
    else if(salary < 200000 && salary >= 150000)
        cout << "supervisor" << endl;
    else if(salary < 150000 && salary >= 80000)
        cout << "technician" << endl;
    else
        cout << "invalid salary" << endl;
        
    return 0;
}