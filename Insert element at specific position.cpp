#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 4};
    auto it = l.begin();
    advance(it, 2);
    l.insert(it, 3);
    for(int x : l) cout << x << " ";
}
