#include <iostream>
#include <string>
using namespace std;

struct emps {
    int emp_ID;
    string emp_name;
    string emp_pos;
};

struct dept {
    string manager_name;
    emps employee[5]; // 5 employees per department
};

void HR() {
    dept HRdept;
    HRdept.manager_name = "Ms. Javaria Shahbaz";
    HRdept.employee[0] = { 101, "Eman", "Recruiter" };
    HRdept.employee[1] = { 102, "Hafsa", "Trainer" };
    HRdept.employee[2] = { 103, "Lareb", "Coordinator" };
    HRdept.employee[3] = { 104, "Maryam", "HR Assistant" };
    HRdept.employee[4] = { 105, "Aiman", "Compensation Analyst" };
    
    cout << "\n===== HUMAN RESOURCE DEPARTMENT =====\n";
    cout << "Manager: " << HRdept.manager_name << "\n";
    cout << "Employee List:\n";
    for (int i = 0; i < 5; i++) {
        cout << " ID: " << HRdept.employee[i].emp_ID
             << " | Name: " << HRdept.employee[i].emp_name
             << " | Position: " << HRdept.employee[i].emp_pos << endl;
    }
}

void Prod() {
    dept P;
    P.manager_name = "Ms. Javaria Shahbaz.";
    P.employee[0] = { 201, "Anas", "Machine Operator" };
    P.employee[1] = { 202, "Manahil", "Quality Checker" };
    P.employee[2] = { 203, "Muskan", "Supervisor" };
    P.employee[3] = { 204, "Abdullah", "Inventory Handler" };
    P.employee[4] = { 205, "Iqra", "Production Assistant" };
    
    cout << "\n===== PRODUCTION DEPARTMENT =====\n";
    cout << "Manager: " << P.manager_name << "\n";
    cout << "Employee List:\n";   
    for (int i = 0; i < 5; i++) {
        cout << " ID: " << P.employee[i].emp_ID
             << " | Name: " << P.employee[i].emp_name
             << " | Position: " << P.employee[i].emp_pos << endl;
    }
}

void Acc() {
    dept A;
    A.manager_name = "Ms. Javaria Shahbaz.";
    A.employee[0] = { 301, "Jannat", "Accountant" };
    A.employee[1] = { 302, "Bashir", "Auditor" };
    A.employee[2] = { 303, "Shamaim", "Payroll Officer" };
    A.employee[3] = { 304, "Asifa", "Ledger Manager" };
    A.employee[4] = { 305, "Muntaha", "Tax Assistant" };
    
    cout << "\n===== ACCOUNTS DEPARTMENT =====\n";
    cout << "Manager: " << A.manager_name << "\n";
    cout << "Employee List:\n";
    for (int i = 0; i < 5; i++) {
        cout << " ID: " << A.employee[i].emp_ID
             << " | Name: " << A.employee[i].emp_name
             << " | Position: " << A.employee[i].emp_pos << endl;
    }
}

void Sales() {
    dept S;
    S.manager_name = "Ms. Javaria Shahbaz.";
    S.employee[0] = { 401, "Iqra", "Sales Executive" };
    S.employee[1] = { 402, "Irfa", "Sales Officer" };
    S.employee[2] = { 403, "Sana", "Customer Handler" };
    S.employee[3] = { 404, "Abeer", "Product Promoter" };
    S.employee[4] = { 405, "Ibtesam", "Field Agent" };
    
    cout << "\n===== SALES DEPARTMENT =====\n";
    cout << "Manager: " << S.manager_name << "\n";
    cout << "Employee List:\n";
    for (int i = 0; i < 5; i++) {
        cout << " ID: " << S.employee[i].emp_ID   
             << " | Name: " << S.employee[i].emp_name
             << " | Position: " << S.employee[i].emp_pos << endl;
    }
}

int main() {
    char repeat;
    int choice;
    cout << "Welcome to the Company Employee Management System!" << endl;
    
    do {
        cout << "\n1. Human Resource (HR)";
        cout << "\n2. Production";
        cout << "\n3. Accounts";
        cout << "\n4. Sales";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: HR(); break;
            case 2: Prod(); break;
            case 3: Acc(); break;
            case 4: Sales(); break;
            case 5:
                cout << "Exiting... Thank you!" << endl;
                break;
            default:
                cout << "Invalid Input! Please try again.\n";
                choice = 0; // Trigger prompt cycle loop iteration reset
                break;
        }
        
        if (choice != 5 && choice != 0) {
            cout << "\nView another department? (Y/N): ";
            cin >> repeat;
        } else if (choice == 0) {
            repeat = 'y';
        }
    } while (choice == 0 || repeat == 'Y' || repeat == 'y');
    
    return 0;
}