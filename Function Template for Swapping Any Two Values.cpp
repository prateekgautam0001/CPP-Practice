#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    double x = 1.1, y = 2.2;
    swapValues(x, y);
    cout << x << " " << y << endl;
}
