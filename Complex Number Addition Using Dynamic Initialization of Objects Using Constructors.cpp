#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1.add(c2);
    c3.display();
    return 0;
}
