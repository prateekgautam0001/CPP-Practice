#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Square {
    void operator()(int &x) {
        x = x * x;
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4};
    for_each(v.begin(), v.end(), Square());
    for(int x : v) cout << x << " ";
}
