#include <iostream>
using namespace std;

template <typename T>
void reverseArray(T arr[], int size) {
    for(int i = size - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {1, 2, 3, 4};
    reverseArray(a, 4);
}
