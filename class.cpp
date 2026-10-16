#include <iostream>
using namespace std;

int main() {
    int limit = 60; 

    cout << "Numbers divisible by 3 up to " << limit << " are:\n";

    
    for (int i = 1; i <= limit; i++) {
     
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
