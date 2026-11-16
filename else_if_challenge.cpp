#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;

    if (a++ > 5 && --b < 10) {
        cout << "Case 1: ";
    } else if (a == 6 && (b = 0)) {
        cout << "Case 2: ";
    } else if (++c == 16 || b++ == 10) {
        cout << "Case 3: ";
    } else {
        cout << "Case 4: ";
    }

    cout << a << " " << b << " " << c;
    return 0;
}
