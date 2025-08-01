#include <iostream>
using namespace std;

int reverse(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    cout << "Reverse: " << reverse(1234);
    return 0;
}