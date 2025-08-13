#include <iostream>
using namespace std;

class Address {
public:
    string city;
    void setCity(string c) {
        city = c;
    }
};

class Person {
public:
    string name;
    Address addr;

    void setData(string n, string c) {
        name = n;
        addr.setCity(c);
    }

    void display() {
        cout << "Name: " << name << ", City: " << addr.city << endl;
    }
};

int main() {
    Person p[2];
    p[0].setData("Ali", "Lahore");
    p[1].setData("Zara", "Karachi");

    for(int i = 0; i < 2; i++) p[i].display();
    return 0;
}
