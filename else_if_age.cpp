// here i do if else in c++ for vote eligibility 
#include <iostream>
using namespace std;
int main(){
        int age;
    cout << "enter yur age : "<<endl;
    cin >>age;

    if ( age >= 100){
        cout <<" invalid age "<<endl;
    }

   else  if (age>=18){
        cout <<"you can vote "<<endl;
    }
    
    else {
        cout <<"you cannot vote ";
    }
    return 0;
}