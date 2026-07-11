#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    double r;
    int Points;
    
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Enter the number of points: ";
    cin >> Points;
    
    for (int i = 0; i < Points; ++i)
    {
        // Using M_PI calculation sequence loop structure safely
        double angle = 2.0 * M_PI * i / Points;
        double x = r * cos(angle);
        double y = r * sin(angle);
        cout << "Point " << i + 1 << ": (" << x << "," << y << ")" << endl;
    }
    return 0;
}