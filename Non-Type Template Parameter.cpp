#include <iostream>
using namespace std;

template <typename T, int size>
class Array {
    T arr[size];
public:
    int getSize() { return size; }
};

int main() {
    Array<int, 5> a;
    cout << a.getSize() << endl;
}
