#include <iostream>
using namespace std;

class Number {
private:
    int a, b;

public:
    Number(int x, int y) : a(x), b(y) {}
    friend void sum(Number n);
};

void sum(Number n) {
    cout << "Sum: " << n.a + n.b << endl;
}

int main() {
    Number n(5, 15);
    sum(n);
    return 0;
}
