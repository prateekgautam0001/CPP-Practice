#include <iostream>
#include <map>
using namespace std;

struct cmp {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    map<int, string, cmp> m;
    m[3] = "C"; m[1] = "A"; m[2] = "B";
    for(auto p : m) cout << p.first << " ";
}
