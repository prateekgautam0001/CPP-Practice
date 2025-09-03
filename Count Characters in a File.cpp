#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    file.open("sample2.txt");
    char ch;
    int count = 0;
    while (!file.eof()) {
        file.get(ch);
        if (!file.eof()) count++;
    }
    file.close();
    cout << count;
    return 0;
}
