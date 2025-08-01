#include <iostream>
using namespace std;

int countConsonants(string);

int main() {
    cout << countConsonants("Hello World");
    return 0;
}

int countConsonants(string s) {
    int count = 0;
    for(char c : s) {
        c = tolower(c);
        if((c >= 'a' && c <= 'z') && !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
            count++;
    }
    return count;
}