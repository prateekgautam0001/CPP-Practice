#include <iostream>
using namespace std;

class Address {
    string city;
public:
    Address(string c) {
        city = c;
    }
    Address(const Address &a) {
        city = a.city;
    }
    void show() {
        cout << city << endl;
    }
};

class Person {
    string name;
    Address addr;
public:
    Person(string n, Address a) : name(n), addr(a) {}
    void display() {
        cout << name << " - ";
        addr.show();
    }
};

int main() {
    Address a1("London");
    Person p1("Mike", a1);
    p1.display();
    return 0;
}
