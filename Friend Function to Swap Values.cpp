#include <iostream>
using namespace std;

class Swap {
private:
    int a, b;

public:
    void set(int x, int y) {
        a = x;
        b = y;
    }

    friend void swapValues(Swap &);
    void show() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

void swapValues(Swap &s) {
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main() {
    Swap s;
    s.set(10, 20);
    swapValues(s);
    s.show();
    return 0;
}
