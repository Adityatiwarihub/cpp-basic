#include <iostream>
using namespace std;

int main() 
{
  char ip;
  cout << "enter your key : ";
  cin >>ip;
  switch (ip){
    
        case 'W':
        case 'w':
            cout << "Move Up" << endl;
            break; 

        case 'A':
        case 'a':
            cout << "Move Left" <<endl;
            break; 

        case 'S':
        case 's':
            cout << "Move Down" <<endl;
            break; 

        case 'D':
        case 'd':
            cout << "Move Right" <<endl;
            break; 

        default:
            cout << "Invalid key pressed";
  }
  return 0;
}