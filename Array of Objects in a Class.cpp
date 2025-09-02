#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    void set(int r) { roll = r; }
    void get() { cout << "Roll: " << roll << endl; }
};

class School {
    Student* s;
public:
    School(int n) {
        s = new Student[n];
        for (int i = 0; i < n; ++i)
            s[i].set(i + 1);
        for (int i = 0; i < n; ++i)
            s[i].get();
        delete[] s;
    }
};

int main() {
    School sc(3);
    return 0;
}
