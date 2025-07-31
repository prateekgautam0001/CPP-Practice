#include <iostream>
using namespace std;

struct Address {
    string city;
    int pincode;
};

struct Student {
    string name;
    Address addr;
};

int main() {
    Student s = {"Priya", {"Delhi", 110001}};
    cout << "Name: " << s.name << "\nCity: " << s.addr.city << "\nPincode: " << s.addr.pincode << endl;
    return 0;
}