#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}
