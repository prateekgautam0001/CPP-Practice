#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Add {
    int operator()(int a, int b) {
        return a + b;
    }
};

int main() {
    vector<int> a = {1, 2, 3}, b = {4, 5, 6}, res(3);
    transform(a.begin(), a.end(), b.begin(), res.begin(), Add());
    for(int x : res) cout << x << " ";
}
