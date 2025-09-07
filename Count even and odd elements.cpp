#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int even = 0, odd = 0;
    for(int x : v) x % 2 == 0 ? even++ : odd++;
    cout << even << " " << odd;
}
