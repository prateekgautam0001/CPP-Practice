#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
};

class Student : virtual public Person {};
class Teacher : virtual public Person {};

class TA : public Student, public Teacher {
public:
    void show() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    TA obj;
    obj.setName("Alex");
    obj.show();
    return 0;
}
