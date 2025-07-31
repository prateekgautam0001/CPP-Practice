#include <iostream>
using namespace std;

struct Car {
    string model;
    enum FuelType { PETROL, DIESEL, ELECTRIC } fuel;
};

int main() {
    Car c = {"Swift", Car::PETROL};
    cout << "Car model: " << c.model << ", Fuel type: " << c.fuel << endl;
    return 0;
}