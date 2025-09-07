#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4, 5, 6};
    l.remove_if([](int x){ return x % 2 == 0; });
    for(int x : l) cout << x << " ";
}
