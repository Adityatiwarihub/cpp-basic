#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    void show() {
        cout << marks;
    }
};

int main() {
    Student rahul(80);
    rahul.show();
    return 0;
}