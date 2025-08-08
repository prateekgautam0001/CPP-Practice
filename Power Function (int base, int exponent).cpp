#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    while (exp--)
        result *= base;
    return result;
}

double power(double base, int exp) {
    double result = 1.0;
    while (exp--)
        result *= base;
    return result;
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl;
    cout << "2.5^3 = " << power(2.5, 3) << endl;
    return 0;
}
