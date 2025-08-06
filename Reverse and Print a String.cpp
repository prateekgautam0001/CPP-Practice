#include <iostream>
using namespace std;

void reversePrint(const string &s) {
    for (int i = s.length() - 1; i >= 0; i--)
        cout << s[i];
}

int main() {
    string word = "Prateek";
    reversePrint(word);
    return 0;
}
