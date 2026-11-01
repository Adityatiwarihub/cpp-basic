#include <iostream>
using namespace std;

int main() {
    int traaffic;
    cout <<"enter traaffic number = " <<endl;
    cin >>traaffic;
    
    switch(traaffic){
        case 1:
            cout << "stop 'red ' " <<endl;
                break;

        case 2:
            cout << "wait 'yellow' " <<endl;
                break;
        case 3:
            cout << "go 'green' " <<endl;
                break;
        default:
            cout << "invalid choice " <<endl;
                break;

    }
    return 0;
}