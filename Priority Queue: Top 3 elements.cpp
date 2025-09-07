#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {4, 1, 7, 3, 8, 5};
    priority_queue<int> pq(v.begin(), v.end());
    for(int i = 0; i < 3 && !pq.empty(); ++i) {
        cout << pq.top() << " ";
        pq.pop();
    }
}
