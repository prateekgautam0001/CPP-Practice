#include <iostream>
using namespace std;

template <typename T, int size>
class FixedArray {
    T arr[size];
public:
    int getSize() { return size; }
};

int main() {
    FixedArray<int, 5> fa;
    cout << fa.getSize() << endl;
}
