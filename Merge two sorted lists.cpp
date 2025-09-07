#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1 = {1, 3, 5}, l2 = {2, 4, 6};
    l1.merge(l2);
    for(int x : l1) cout << x << " ";
}
