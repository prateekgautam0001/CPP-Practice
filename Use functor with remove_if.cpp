#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct IsOdd {
    bool operator()(int x) {
        return x % 2 != 0;
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(remove_if(v.begin(), v.end(), IsOdd()), v.end());
    for(int x : v) cout << x << " ";
}
