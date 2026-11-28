#include <fstream>
using namespace std;

int main() {
    ofstream f1("data.txt");
    f1 << "Hello ";
    f1.close();

    ofstream f2("data.txt");
    f2 << "World";
    f2.close();
    return 0;
}
