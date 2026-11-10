#include <iostream>
using namespace std;

int main() {
    double n , n2;
    char op;
    cout << "enter your +, - , * , /  = " <<endl;
    cin >>op;

    cout << "enter your f number = " <<endl;
    cin >>n;

    cout << " enter your s numberr = " <<endl;
    cin >>n2;

    switch(op){
        case '+':
            cout << "Result ; " << n + n2 << endl;
                 break;
        default:
            cout << "invalid " <<endl;
    }
    return 0;
}
