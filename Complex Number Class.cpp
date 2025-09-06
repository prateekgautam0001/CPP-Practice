#include <iostream>
using namespace std;

template <typename T>
class Complex {
    T real, imag;
public:
    Complex(T r, T i) : real(r), imag(i) {}
    void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    Complex<double> c(3.2, 4.5);
    c.display();
}
