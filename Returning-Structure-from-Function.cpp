#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
};

Student getStudent() {
    Student s;
    s.name = "Tina";
    s.roll = 5;
    return s;
}

int main() {
    Student s = getStudent();
    cout << "Name: " << s.name << ", Roll: " << s.roll << endl;
    return 0;
}