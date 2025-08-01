#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, rev = 0;
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return original == rev;
}

int main() {
    cout << (isPalindrome(121) ? "Palindrome" : "Not Palindrome");
    return 0;
}