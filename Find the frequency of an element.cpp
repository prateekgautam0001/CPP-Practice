#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 2, 4};
    int count_val = count(v.begin(), v.end(), 2);
    cout << count_val;
}
