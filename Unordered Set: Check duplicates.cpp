#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 5};
    unordered_set<int> seen;
    for(int x : v) {
        if(seen.count(x)) { cout << "Duplicate"; return 0; }
        seen.insert(x);
    }
    cout << "No Duplicates";
}
