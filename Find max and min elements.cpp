#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 9, 1, 7};
    cout << *max_element(v.begin(), v.end()) << " ";
    cout << *min_element(v.begin(), v.end());
}
