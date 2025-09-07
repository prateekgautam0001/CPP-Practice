#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> a = {1, 2, 3}, b = {3, 4, 5}, result;
    result.insert(a.begin(), a.end());
    result.insert(b.begin(), b.end());
    for(int x : result) cout << x << " ";
}
