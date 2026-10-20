#include <iostream>
using namespace std;

int main(){
    int x = 6;
    int y = 9;

    cout <<boolalpha <<endl;

    cout << (x < y && y < 11 )<<endl;
    cout << (x > y || x == 6)<<endl;
    cout << !(x == 6)<<endl;

    return 0;
}