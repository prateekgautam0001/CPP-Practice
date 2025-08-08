#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks1, marks2;

public:
    void input(int r, float m1, float m2) {
        roll = r;
        marks1 = m1;
        marks2 = m2;
    }

    void display() {
        cout << "Roll: " << roll << "\nTotal: " << marks1 + marks2 << endl;
    }
};

int main() {
    Student s;
    s.input(101, 85.5, 90.0);
    s.display();
    return 0;
}
