#include <iostream>
using namespace std;

char toLower(char);

int main() {
    cout << toLower('H');
    return 0;
}

char toLower(char ch) {
    if(ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}