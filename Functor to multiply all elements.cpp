#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

struct Multiply {
    int operator()(int a, int b) {
        return a * b;
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4};
    int product = accumulate(v.begin(), v.end(), 1, Multiply());
    cout << product;
}
