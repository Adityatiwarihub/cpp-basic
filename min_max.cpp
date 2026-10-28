#include <iostream>
using namespace std;
int main(){

    int num;


    cout <<"enter your number = "<<endl;
    cin >> num;

    
    if ( num <= 70 && num >= 100){
        cout <<"maximum number"<<endl;
    }
    else if ( num <= 69 && num >= 30){
        cout <<"minimum number "<<endl;

    }
    else {
        cout <<"invalid ";
    }
    


    return 0;
}