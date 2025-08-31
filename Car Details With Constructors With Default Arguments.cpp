#include <iostream>
using namespace std;

class Car {
    string model;
    int year;
public:
    Car(string m = "Generic", int y = 2020) {
        model = m;
        year = y;
    }
    void print() {
        cout << model << " - " << year << endl;
    }
};

int main() {
    Car c1, c2("Toyota", 2023);
    c1.print();
    c2.print();
    return 0;
}
