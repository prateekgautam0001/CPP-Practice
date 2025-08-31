#include <iostream>
#include <algorithm>
using namespace std;

class Word {
    string str;
public:
    Word(string s) {
        str = s;
    }
    void reverseWord() {
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
};

int main() {
    Word w("Constructor");
    w.reverseWord();
    return 0;
}
