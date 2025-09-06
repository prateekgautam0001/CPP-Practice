#include <iostream>
using namespace std;

template <typename T, typename U>
class Data {
    T x;
    U y;
public:
    Data(T a, U b) : x(a), y(b) {}
    void display() { cout << x << " " << y << endl; }
};

int main() {
    Data<int, string> d(100, "Hello");
    d.display();
}
