#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while(num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    cout << "Digits: " << countDigits(12345);
    return 0;
}