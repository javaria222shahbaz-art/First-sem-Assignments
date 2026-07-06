#include <iostream>
using namespace std;

int main() {
    int h, s, m, t, m_rem;
    cout << "Enter time in seconds = ";
    cin >> t;

    h = t / 3600;
    m_rem = t % 3600;
    m = m_rem / 60;
    s = m_rem % 60;

    cout << "Hours = " << h << endl;
    cout << "Minutes = " << m << endl;
    cout << "Seconds = " << s << endl;

    return 0;
}