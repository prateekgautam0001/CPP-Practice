#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {3, 6, 1, 8, 5};
    l.remove_if([](int x){ return x > 5; });
    for(int x : l) cout << x << " ";
}
