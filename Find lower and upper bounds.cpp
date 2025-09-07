#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 4, 5};
    auto lb = lower_bound(v.begin(), v.end(), 4);
    auto ub = upper_bound(v.begin(), v.end(), 4);
    cout << lb - v.begin() << " " << ub - v.begin();
}
