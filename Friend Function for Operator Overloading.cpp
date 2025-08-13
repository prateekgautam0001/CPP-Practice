#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    friend Complex operator+(Complex, Complex);
    void display() {
        cout << real << " + " << imag << "i\n";
    }
};

Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex a(3, 4), b(1, 2);
    Complex c = a + b;
    c.display();
    return 0;
}
