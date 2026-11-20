#include <iostream>
using namespace std;
int main(){
    int num, reverse = 0, n;

    cout << "enter your number : " << endl;
    cin >>num;

    while (num != 0){
        n = num % 10;
        reverse = reverse * 10 + n;
        num = num / 10;
    }
    cout << "reversed number : " << reverse ;

        return 0;
}