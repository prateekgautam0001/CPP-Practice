#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct CompareSecond {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    }
};

int main() {
    vector<pair<int, int>> v = {{1, 3}, {2, 1}, {3, 2}};
    sort(v.begin(), v.end(), CompareSecond());
    for(auto p : v) cout << "(" << p.first << "," << p.second << ") ";
}
