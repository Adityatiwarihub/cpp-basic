#include <iostream>
using namespace std;

int main() {
    float m[6], total = 0, per;
    cout <<"enter the marks here = "<<endl;

    for (int i = 0; i < 6; i++) {
        cin >> m[i];
        total += m[i];
    }

    per = total / 6;
    cout << "Total = " << total << endl;
    cout << "Percentage = " << per << "%" << endl;

    if (per >= 60)
        cout << "Pass - First Division";
    else if (per >= 50)
        cout << "Pass - Second Division";
    else if (per >= 40)
        cout << "Pass - Third Division";
    else
        cout << "Fail";

    return 0;
}