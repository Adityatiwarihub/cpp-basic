#include <iostream>
using namespace std;
int main(){

    int age;
    cout << "enter the customer age =  "<<endl;
    cin>> age;

    if ( age >= 0 && age <= 5){
        cout <<"Free entry for toddlers!"<<endl;
    }
    else if ( age >= 6 && age <= 12){
        cout <<"Ticket price: $5"<<endl;
    }

    else if ( age >= 13 && age <= 59){
        cout << "Ticket price: $12"<<endl;
    }
    else if (age >= 60 && age <= 100){
        cout << "Ticket price: $8 " <<endl;
    }
    else {
        cout <<"invalid";
    }


    return 0;
}