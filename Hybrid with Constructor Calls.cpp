#include <iostream>
using namespace std;

class X {
public:
    X() {
        cout << "X Constructor\n";
    }
};

class Y {
public:
    Y() {
        cout << "Y Constructor\n";
    }
};

class Z : public X, public Y {
public:
    Z() {
        cout << "Z Constructor\n";
    }
};

class Final : public Z {
public:
    Final() {
        cout << "Final Constructor\n";
    }
};

int main() {
    Final obj;
    return 0;
}
