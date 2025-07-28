#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 88, 15};
    int* ptr = arr;
    int max = *ptr;

    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    cout << "Maximum element: " << max;
    return 0;
}
