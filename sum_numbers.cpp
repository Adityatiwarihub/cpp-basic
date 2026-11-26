#include <iostream>
using namespace std;

int main() {
   int sum = 0;
   int n;
   cout << "enter your number: " << endl;
   cin >>n;
for (int i = 1; i <= n; i++) {
    sum = sum + i; 
}

cout << "Total: " << sum; 


    return 0;
}
