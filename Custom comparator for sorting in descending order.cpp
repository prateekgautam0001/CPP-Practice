#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Desc {
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    vector<int> v = {4, 2, 5, 1};
    sort(v.begin(), v.end(), Desc());
    for(int x : v) cout << x << " ";
}
