#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {3, 1, 4, 2, 5};
    l.sort();
    l.reverse();
    for(int x : l) cout << x << " ";
}
