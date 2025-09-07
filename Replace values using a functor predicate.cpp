#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct IsNegative {
    bool operator()(int x) {
        return x < 0;
    }
};

int main() {
    vector<int> v = {-1, 2, -3, 4};
    replace_if(v.begin(), v.end(), IsNegative(), 0);
    for(int x : v) cout << x << " ";
}
