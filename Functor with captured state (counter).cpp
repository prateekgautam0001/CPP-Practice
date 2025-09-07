#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Counter {
    int count = 0;
    void operator()(int x) {
        if(x % 2 == 0) ++count;
    }
};

int main() {
    vector<int> v = {1, 2, 4, 5, 6};
    Counter c = for_each(v.begin(), v.end(), Counter());
    cout << c.count;
}
