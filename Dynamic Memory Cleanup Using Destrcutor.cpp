#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;
public:
    Array(int s) {
        size = s;
        arr = new int[size];
    }
    void set(int index, int value) {
        arr[index] = value;
    }
    void print() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array a(5);
    for (int i = 0; i < 5; i++)
        a.set(i, i + 1);
    a.print();
    return 0;
}
