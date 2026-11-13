#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "enter your number : ";
    cin >>num;

    if (num %5 == 0 && num %11 == 0) {
        cout << "divisible by 5 or 11 " <<endl;

    }
    else {
        cout  << "not divisible by 5 or 11" <<endl;
            }
    
    
    return 0;
    
    }