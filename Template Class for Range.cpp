#include <iostream>
using namespace std;

template <typename T>
class Range {
    T start, end;
public:
    Range(T s, T e) : start(s), end(e) {}
    void display() {
        for (T i = start; i <= end; ++i)
            cout << i << " ";
        cout << endl;
    }
};

int main() {
    Range<int> r(1, 5);
    r.display();
}
