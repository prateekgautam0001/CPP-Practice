#include <iostream>
using namespace std;

class Box {
    int size;
public:
    void init(int s) { size = s; }
    void print() { cout << "Size: " << size << endl; }
};

int main() {
    Box* arr = new Box[3];
    for (int i = 0; i < 3; ++i)
        arr[i].init((i+1)*5);
    for (int i = 0; i < 3; ++i)
        arr[i].print();
    delete[] arr;
    return 0;
}
