#include<iostream>
using namespace std;

int main() {
    int n, flag = 1;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag) cout << "Array is sorted.";
    else cout << "Array is NOT sorted.";
    return 0;
}
