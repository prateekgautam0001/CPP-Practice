#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct LengthCompare {
    bool operator()(const string &a, const string &b) {
        return a.size() < b.size();
    }
};

int main() {
    vector<string> v = {"apple", "kiwi", "banana"};
    sort(v.begin(), v.end(), LengthCompare());
    for(auto &s : v) cout << s << " ";
}
