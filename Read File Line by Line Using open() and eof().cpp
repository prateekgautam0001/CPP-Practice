#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file;
    file.open("sample1.txt");
    string line;
    while (!file.eof()) {
        getline(file, line);
        cout << line << endl;
    }
    file.close();
    return 0;
}
