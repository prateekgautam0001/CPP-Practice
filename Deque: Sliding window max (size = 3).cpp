#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    deque<int> dq;
    for (int i = 0; i < arr.size(); ++i) {
        if (!dq.empty() && dq.front() == i - k) dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) cout << arr[dq.front()] << " ";
    }
}
