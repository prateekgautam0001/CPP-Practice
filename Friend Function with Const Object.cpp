#include <iostream>
using namespace std;

class Demo {
private:
    int val;

public:
    Demo(int v) : val(v) {}
    friend void printVal(const Demo &);
};

void printVal(const Demo &d) {
    cout << "Value: " << d.val << endl;
}

int main() {
    Demo d(42);
    printVal(d);
    return 0;
}
