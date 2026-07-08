#include<iostream>
using namespace std;

int main()
{
    float g1, g2, g3, avg;
    cout << "enter grade of 3 students" << endl;
    cin >> g1 >> g2 >> g3;
    
    // Note: The original formula in the document was g1+g2+g3/3, 
    // which operator precedence evaluates as g1 + g2 + (g3/3). 
    // Corrected to use parentheses for proper averaging:
    avg = (g1 + g2 + g3) / 3;
    
    cout << "avg =" << avg << endl;
    return 0;
}