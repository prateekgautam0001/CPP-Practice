#include<iostream>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    if(start >= end) return true;
    if(str[start] != str[end]) return false;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string s = "madam";
    cout << (isPalindrome(s, 0, s.length() - 1) ? "Palindrome" : "Not Palindrome");
}
