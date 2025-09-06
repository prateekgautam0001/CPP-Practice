#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}
    void display() { cout << first << ", " << second << endl; }
};

int main() {
    Pair<int, double> p(10, 3.14);
    p.display();
}
