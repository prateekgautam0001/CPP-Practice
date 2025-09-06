#include <iostream>
using namespace std;

template <typename T = int>
class Value {
    T data;
public:
    Value(T d) : data(d) {}
    void show() { cout << data << endl; }
};

int main() {
    Value<> v1(100);
    Value<double> v2(3.14);
    v1.show();
    v2.show();
}
