#include <iostream>
using namespace std;

int sumOdd(int);

int main() {
    cout << sumOdd(9);
    return 0;
}

int sumOdd(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i += 2)
        sum += i;
    return sum;
}