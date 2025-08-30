#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) : name(n), marks(m) {}

    friend void display(Student);
    friend void grade(Student);
};

void display(Student s) {
    cout << "Student: " << s.name << ", Marks: " << s.marks << endl;
}

void grade(Student s) {
    cout << "Grade: ";
    if (s.marks >= 90)
        cout << "A\n";
    else if (s.marks >= 75)
        cout << "B\n";
    else
        cout << "C\n";
}

int main() {
    Student s("John", 82);
    display(s);
    grade(s);
    return 0;
}
