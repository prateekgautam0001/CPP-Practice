#include <iostream>
using namespace std;

class Student {
    string name;
    float marks[3];
public:
    Student(string n, float m1, float m2, float m3) {
        name = n;
        marks[0] = m1; marks[1] = m2; marks[2] = m3;
    }
    void displayAverage() {
        float avg = (marks[0] + marks[1] + marks[2]) / 3;
        cout << name << ": " << avg << endl;
    }
};

int main() {
    Student s1("Alice", 85, 78, 92);
    s1.displayAverage();
    return 0;
}
