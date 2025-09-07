#include <iostream>
#include <set>
using namespace std;

int main() {
    set<pair<int, int>> s;
    s.insert({1, 3}); s.insert({1, 2}); s.insert({2, 1});
    for(auto p : s) cout << "(" << p.first << "," << p.second << ") ";
}
