#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 1, 3, 3};
    map<int, int> freq;
    for(int x : v) freq[x]++;
    for(auto p : freq) cout << p.first << ":" << p.second << " ";
}
