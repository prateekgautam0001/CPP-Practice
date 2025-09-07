#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {1, 2, 2, 3, 3, 3};
    cout << ms.count(3) << endl;
}
