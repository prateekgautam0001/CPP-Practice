#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 4, 6, 7};
    bool found = binary_search(v.begin(), v.end(), 4);
    cout << (found ? "Yes" : "No");
}
