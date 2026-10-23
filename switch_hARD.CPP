#include <iostream>
using namespace std;

int main(){
    int choice, quantity;
    double price = 0.0;
    double total, discount, finalbill;
    
    cout <<"menu" <<endl;
    cout <<"1. burger - rs 120"<<endl;
    cout <<"2. pizza - rs 250"<<endl;
    cout <<"3. sandwich - rs 90"<<endl;
    cout <<"enter your choice ";
    cin >>choice;

    switch (choice){
        case 1:
        price = 120;
        break;

        case 2:
        price = 250;
        break;

        case 3:
        price = 90;
        break;

        default :
        cout <<"invalid menu choice "<<endl;
        
        return 0;
    }
   
    cout <<"enter quantity = "<<endl;
    cin >>quantity;

    if (quantity <= 0){
        cout <<"invalid quantity"<<endl;

    }
    else {
        total = price * quantity;

        if (total >= 500){
            discount = total * 10 / 100;

        }
        else {
            discount = 0;
        }

        finalbill = total - discount;

        cout << "total : RS "<<total <<endl;
        cout << "discount : RS "<<discount <<endl;
        cout << "finall bill : RS "<<finalbill <<endl;
    }

    return 0;

}