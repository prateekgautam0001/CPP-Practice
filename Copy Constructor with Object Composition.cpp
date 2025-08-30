#include <iostream>
using namespace std;

class Engine {
public:
    int horsepower;

    Engine(int hp) {
        horsepower = hp;
    }

    Engine(const Engine& e) {
        horsepower = e.horsepower;
    }
};

class Car {
private:
    string model;
    Engine engine;

public:
    Car(string m, int hp) : model(m), engine(hp) {}

    // Copy Constructor
    Car(const Car& c) : model(c.model), engine(c.engine) {}

    void show() {
        cout << "Car: " << model << ", Engine: " << engine.horsepower << " HP" << endl;
    }
};

int main() {
    Car c1("Mustang", 500);
    Car c2 = c1;
    c2.show();
    return 0;
}
