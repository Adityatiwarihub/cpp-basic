#include <iostream>
using namespace std;
int main(){
    int age;
    cout <<"type your age for train  ticket =   " <<endl;
    cin >> age;

    if (age >= 0 && age <= 12){
        cout <<"no need to ticket in train"<<endl;

    }
    else if ( age >= 13 && age <= 100 ){
        cout << "you are adult you need a ticket in train atleast " <<endl;
    }
    else {
        cout <<"invalid age ";
    }
 

    return 0;
}