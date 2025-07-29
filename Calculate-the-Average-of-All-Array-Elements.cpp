#include<iostream>
using namespace std;

int main() {
    int n;
    float sum = 0;
    cout << "Enter size: ";
    cin >> n;

    float arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = sum / n;
    cout << "Average = " << avg;
    return 0;
}
