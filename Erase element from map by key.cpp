#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "A"}, {2, "B"}, {3, "C"}};
    m.erase(2);
    for(auto p : m) cout << p.first << " ";
}
