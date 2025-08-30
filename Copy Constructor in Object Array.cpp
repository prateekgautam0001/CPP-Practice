#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    Student(string n) {
        name = n;
    }

    Student(const Student& s) {
        name = s.name + " (copy)";
    }

    void show() {
        cout << "Student: " << name << endl;
    }
};

int main() {
    Student arr[2] = { Student("Alice"), Student("Bob") };
    Student copies[2] = { arr[0], arr[1] };

    for (int i = 0; i < 2; i++)
        copies[i].show();

    return 0;
}
