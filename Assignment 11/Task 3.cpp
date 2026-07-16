#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Line {
    Point p1;
    Point p2;   
};

double findDistance(Line L) {
    double dx = L.p2.x - L.p1.x;
    double dy = L.p2.y - L.p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Line line;
    cout << "Enter coordinates for first point (x1 y1): ";
    cin >> line.p1.x >> line.p1.y;
    cout << "Enter coordinates for second point (x2 y2): ";
    cin >> line.p2.x >> line.p2.y;
    
    double dist = findDistance(line);
    cout << "\nThe distance between the two points is: " << dist << endl;   
    return 0;
}