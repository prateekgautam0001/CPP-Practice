#include <iostream>
using namespace std;

void compareStrings(const string &a, const string &b) {
    if (a == b)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
}

int main() {
    compareStrings("hello", "Hello");
    return 0;
}
