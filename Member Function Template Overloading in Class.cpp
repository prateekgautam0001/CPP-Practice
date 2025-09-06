#include <iostream>
using namespace std;

class Operations {
public:
    template <typename T>
    void process(T a) {
        cout << "Single: " << a << endl;
    }

    template <typename T, typename U>
    void process(T a, U b) {
        cout << "Double: " << a << ", " << b << endl;
    }
};

int main() {
    Operations op;
    op.process(100);
    op.process(3.14, "Value");
}
