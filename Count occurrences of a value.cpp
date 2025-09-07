#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 2, 4, 2};
    int cnt = count(l.begin(), l.end(), 2);
    cout << cnt;
}
