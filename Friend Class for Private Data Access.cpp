#include <iostream>
using namespace std;

class ClassA {
private:
    int value;

public:
    ClassA(int v) : value(v) {}

    friend class ClassB;
};

class ClassB {
public:
    void showValue(ClassA obj) {
        cout << "Value from ClassA: " << obj.value << endl;
    }
};

int main() {
    ClassA a(10);
    ClassB b;
    b.showValue(a);
    return 0;
}
