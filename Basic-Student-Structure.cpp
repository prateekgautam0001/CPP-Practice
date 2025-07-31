#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s = {"Ravi", 101, 89.5};
    cout << "Name: " << s.name << "\nRoll: " << s.roll << "\nMarks: " << s.marks << endl;
    return 0;
}