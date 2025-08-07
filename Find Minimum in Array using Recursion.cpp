#include<iostream>
using namespace std;

int findMin(int arr[], int n) {
    if(n == 1) return arr[0];
    return min(arr[n - 1], findMin(arr, n - 1));
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    cout << "Min: " << findMin(arr, 5);
}
