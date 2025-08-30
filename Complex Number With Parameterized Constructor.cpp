#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c(4, 5);
    c.display();
    return 0;
}
