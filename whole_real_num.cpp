#include <iostream>
#include <cmath> // Required for floor()
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    // A whole number is non-negative (0, 1, 2, 3...) and has no decimal part
    if (num >= 0 && floor(num) == num) {
        cout << num << " is a Whole Number (and also a Real Number)." << endl;
    } else {
        cout << num << " is a Real Number (not a Whole Number)." << endl;
    }

    return 0;
}
