#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 5};
    v.insert(v.begin() + 2, 3);
    for(int x : v) cout << x << " ";
}
