#include<iostream>
using namespace std;

int gpTerm(int a, int r, int n) {
    if(n == 1) return a;
    return r * gpTerm(a, r, n - 1);
}

int main() {
    cout << "5th Term = " << gpTerm(2, 3, 5); // 2*3^4 = 162
}
