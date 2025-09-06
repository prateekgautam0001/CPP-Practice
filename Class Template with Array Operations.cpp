#include <iostream>
using namespace std;

template <typename T>
class Array {
    T* arr;
    int size;
public:
    Array(T* a, int s) : arr(a), size(s) {}
    void display() {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    int a[] = {1, 2, 3};
    Array<int> arr(a, 3);
    arr.display();
}
