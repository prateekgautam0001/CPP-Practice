#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) s += arr[i];
    return s;
}

double sum(double arr[], int size) {
    double s = 0;
    for (int i = 0; i < size; i++) s += arr[i];
    return s;
}

int main() {
    int a[] = {1, 2, 3};
    double b[] = {1.1, 2.2, 3.3};
    
    cout << "Sum of int array: " << sum(a, 3) << endl;
    cout << "Sum of double array: " << sum(b, 3) << endl;
    return 0;
}
