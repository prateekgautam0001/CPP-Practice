#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }
    void show() {
        cout << name << " - " << age << endl;
    }
};

void printStudent(Student s) {
    s.show();
}

int main() {
    Student s1("Alice", 21);
    printStudent(s1);
    return 0;
}
