#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {2, 7, 5, 9, 3};
    for(auto& x : v) if(x > 5) x = 5;
    for(int x : v) cout << x << " ";
}
