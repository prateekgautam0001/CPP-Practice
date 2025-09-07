#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m = {{1, 10}, {3, 30}, {2, 20}};
    auto it = m.rbegin();
    cout << it->first << " " << it->second;
}
