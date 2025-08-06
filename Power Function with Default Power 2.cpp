#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exp = 2) {
    return pow(base, exp);
}

int main() {
    cout << power(3) << endl;     // 3^2
    cout << power(3, 4) << endl;  // 3^4
    return 0;
}
