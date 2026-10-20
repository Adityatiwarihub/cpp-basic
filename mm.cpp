#include <iostream>
using namespace std;

int main(){
    int num ;
   
    cin >> num ;

    if ( num == 0 )
    {
        cout << "the number is zero" << endl;
    }
    else if ( num == 8){
        cout << "positive even number "<<endl;

    }
    else if (num == 7){
        cout << "positive odd number "<<endl;

    }
    else if (num == -6){
        cout << "negative even number "<<endl;

    }
    else if (num == -5){
        cout << "negative odd number "<<endl;

    }
    else {
        cout << "invalid input "<<endl;
    }
    return 0;
}