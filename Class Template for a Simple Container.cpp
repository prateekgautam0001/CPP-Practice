#include <iostream>
using namespace std;

template <typename T>
class Container {
    T value;
public:
    void set(T val) { value = val; }
    T get() { return value; }
};

int main() {
    Container<int> c;
    c.set(100);
    cout << c.get() << endl;
}
