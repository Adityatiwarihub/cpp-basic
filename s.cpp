#include <iostream>
using namespace std;

int main() {
    char choice;
    
    cout << "Enter T for Tea, C for Coffee, J for Juice: ";
    cin >> choice;
    
    // switch only works on integral types like char or int
    switch (choice) {
        case 'T':
            cout << "Customer wants Tea" << endl;
            break;
            
        case 'C':
            cout << "Customer wants Coffee" << endl;
            break;
            
        case 'J':
            cout << "Customer wants Juice" << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
