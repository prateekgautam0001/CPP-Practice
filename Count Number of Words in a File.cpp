#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file;
    file.open("words.txt");
    string word;
    int count = 0;
    while (!file.eof()) {
        file >> word;
        if (!file.eof()) count++;
    }
    file.close();
    cout << count;
    return 0;
}
