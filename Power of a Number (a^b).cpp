#include<iostream>
using namespace std;

int power(int a, int b) {
    if(b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    cout << "3^4 = " << power(3, 4);
}
