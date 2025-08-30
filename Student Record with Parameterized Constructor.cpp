#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s("John", 12);
    s.display();
    return 0;
}
