#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;
    inFile.open("source.txt");
    outFile.open("destination.txt");
    char ch;
    while (!inFile.eof()) {
        inFile.get(ch);
        if (!inFile.eof()) outFile.put(ch);
    }
    inFile.close();
    outFile.close();
    return 0;
}
