#include <iostream>
using namespace std;

int main() {
    char drinkchoice; 
    cout <<"Choose a drink (T/C/J): = " <<endl;
    cin >> drinkchoice;

    switch(drinkchoice){
        case 'T':
            cout << "coustmer wants tea " <<endl;
                break;

        case 'C':
            cout << "coustmer wants coffee " <<endl;
                break;
        case 'J':
            cout << " coustmer wants juice " <<endl;
                break;
        
        default:
            cout << "invalid drinkchoice " <<endl;
            
            
         }

    return 0;
}