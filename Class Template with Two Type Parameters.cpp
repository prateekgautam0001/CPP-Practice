#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display() { cout << first << " " << second << endl; }
};

int main() {
    Pair<int, string> p(10, "Apple");
    p.display();
}
