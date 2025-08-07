#include<iostream>
using namespace std;

int customSeq(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return customSeq(n - 1) + 2 * customSeq(n - 2);
}

int main() {
    cout << "T(5) = " << customSeq(5);
}
