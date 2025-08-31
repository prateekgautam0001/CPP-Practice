#include <iostream>
using namespace std;

class Student {
    string name;
    int grade;
public:
    Student(string n = "Student", int g = 0) {
        name = n;
        grade = g;
    }
    void show() {
        cout << name << ": " << grade << endl;
    }
};

int main() {
    Student s1, s2("John", 88);
    s1.show();
    s2.show();
    return 0;
}
