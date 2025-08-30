#include <iostream>
using namespace std;

class Complex;

class Calculator {
public:
    Complex add(const Complex &, const Complex &);
};

class Complex {
private:
    int real, imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}
    void display() const { cout << real << " + " << imag << "i\n"; }

    friend class Calculator;
};

Complex Calculator::add(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4), c2(1, 2);
    Calculator calc;
    Complex sum = calc.add(c1, c2);
    sum.display();
    return 0;
}
