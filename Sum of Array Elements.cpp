#include <iostream>
using namespace std;

int sumArray(const int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    cout << "Sum = " << sumArray(a, 5);
    return 0;
}
