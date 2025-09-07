#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {4, 2, 3, 2, 1, 4};
    l.sort();
    l.unique();
    for(int x : l) cout << x << " ";
}
