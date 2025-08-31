#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2 = c1;
    c2.display();
    return 0;
}
