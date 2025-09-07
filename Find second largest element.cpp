#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3, 5, 1, 4, 2};
    sort(v.begin(), v.end(), greater<int>());
    cout << v[1];
}
