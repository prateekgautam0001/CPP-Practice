#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["apple"] = 10;
    m["banana"] = 5;
    m["apple"] += 3;
    for(auto p : m) cout << p.first << ":" << p.second << " ";
}
