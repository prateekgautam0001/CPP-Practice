#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum;
}
