#include<iostream>
using namespace std;

void reverseString(string &s, int i, int j) {
    if(i >= j) return;
    swap(s[i], s[j]);
    reverseString(s, i + 1, j - 1);
}

int main() {
    string s = "hello";
    reverseString(s, 0, s.length() - 1);
    cout << s;
}
