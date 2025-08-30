#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    Car() {
        brand = "Toyota";
        year = 2020;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car c;
    c.display();
    return 0;
}
