#include <iostream>
using namespace std;

class Transport {
public:
    virtual void move() = 0;
};

class Car : public Transport {
public:
    void move() {
        cout << "Car is moving\n";
    }
};

class Plane : public Transport {
public:
    void move() {
        cout << "Plane is flying\n";
    }
};

int main() {
    Transport* t = new Car();
    t->move();
    delete t;
}
