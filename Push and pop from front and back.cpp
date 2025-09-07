#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.push_front(2);
    l.push_back(3);
    l.push_front(1);
    l.pop_back();
    for(int x : l) cout << x << " ";
}
