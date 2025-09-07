#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 4};
    v.erase(remove(v.begin(), v.end(), 2), v.end());
    for(int x : v) cout << x << " ";
}
