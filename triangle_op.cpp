#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    // Take three side lengths as input
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check that all sides are positive AND the triangle inequality holds for all pairs
    if ((a > 0 && b > 0 && c > 0) && (a + b > c && a + c > b && b + c > a)) {
        cout << "Valid Triangle" << endl;
    } else {
        cout << "Invalid Triangle" << endl;
    }

    return 0;
}
