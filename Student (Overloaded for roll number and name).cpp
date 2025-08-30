#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    Student() {
        roll = 0;
        name = "NA";
    }

    Student(int r) {
        roll = r;
        name = "NA";
    }

    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    Student s2(10);
    Student s3(20, "Rahul");
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
