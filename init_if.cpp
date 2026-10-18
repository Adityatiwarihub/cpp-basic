#include <iostream>
using namespace std;

int main() {
    int secretCode = 5588;

    if (int enteredCode; cin >> enteredCode && enteredCode == secretCode) {
        cout << "Access granted!" << endl;
    } else {
        cout << "Access denied!" << endl;
    }

    return 0;
}
