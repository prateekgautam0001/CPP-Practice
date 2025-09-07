#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> a = {1, 2}, b = {3, 4};
    auto it = a.end();
    a.splice(it, b);
    for(int x : a) cout << x << " ";
}
