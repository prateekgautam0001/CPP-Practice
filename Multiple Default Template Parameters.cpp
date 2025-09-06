#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = double>
class Pair {
    T1 a;
    T2 b;
public:
    Pair(T1 x, T2 y) : a(x), b(y) {}
    void display() { cout << a << " " << b << endl; }
};

int main() {
    Pair<> p1(10, 5.5);
    Pair<char, string> p2('A', "Apple");
    p1.display();
    p2.display();
}
