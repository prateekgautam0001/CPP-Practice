#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file;
    file.open("lines.txt");
    string line;
    int lineNumber = 1;
    while (!file.eof()) {
        getline(file, line);
        if (!file.eof() && lineNumber % 2 == 0) cout << line << endl;
        lineNumber++;
    }
    file.close();
    return 0;
}
