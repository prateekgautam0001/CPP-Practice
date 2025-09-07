#include <iostream>
#include <map>
using namespace std;

struct Desc {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    map<int, string, Desc> m;
    m[3] = "Three"; m[1] = "One"; m[2] = "Two";
    for(auto p : m) cout << p.first << " " << p.second << endl;
}
