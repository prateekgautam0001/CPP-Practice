#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;
public:
    Array(int s) {
        size = s;
        arr = new int[size];
        for(int i = 0; i < size; i++)
            arr[i] = i + 1;
    }
    Array(const Array &a) {
        size = a.size;
        arr = new int[size];
        for(int i = 0; i < size; i++)
            arr[i] = a.arr[i];
    }
    void print() {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array a1(5);
    Array a2 = a1;
    a2.print();
    return 0;
}
