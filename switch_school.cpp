#include <iostream>
using namespace std;
int main(){
    int day;
    cout << "enter day number 1- 7 : ";
    cin >> day;
    switch(day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << " school day " <<endl;
                break;
        case 6:
        case 7:
            cout << "weekend day " <<endl;
                break;
        
        default:
            cout << "invalid day number " <<endl;
    }

    return 0;
}