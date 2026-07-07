#include<iostream>
using namespace std;

int main()
{
    float g1, g2, g3, avg;
    cout << "enter grade of 3 students" << endl;
    cin >> g1 >> g2 >> g3;

    avg = (g1 + g2 + g3) / 3;
    
    cout << "avg =" << avg << endl;
    return 0;
}
