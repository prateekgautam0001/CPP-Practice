#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct GreaterThan {
    int val;
    GreaterThan(int x) : val(x) {}
    bool operator()(int x) {
        return x > val;
    }
};

int main() {
    vector<int> v = {2, 5, 7, 1, 9};
    int count_gt = count_if(v.begin(), v.end(), GreaterThan(5));
    cout << count_gt;
}
