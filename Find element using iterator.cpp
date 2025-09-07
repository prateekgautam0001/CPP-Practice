#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};
    auto it = find(l.begin(), l.end(), 20);
    if(it != l.end()) cout << *it;
}
