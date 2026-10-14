#include <iostream>
using namespace std;
int main() {
    int a = 5/2;
    cout << "T1: " << a << endl;          // 2

    double x = 5/2;
    cout << "T2: " << x << endl;          // 2.0

    double y = 5.0/2;
    cout << "T3: " << y << endl;          // ?

    cout << "T4: " << 2 + 3 * 4 << " " << (2+3) * 4 << endl;  // ?14  20

    int n = 7;
    cout << "T5: " << n/2 << " " << n%2 << endl;  // ? 3 1
}
