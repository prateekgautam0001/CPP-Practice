#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string str = "this is a test this is test";
    map<string, int> freq;
    istringstream iss(str);
    string word;
    while(iss >> word) freq[word]++;
    for(auto p : freq) cout << p.first << ":" << p.second << " ";
}
