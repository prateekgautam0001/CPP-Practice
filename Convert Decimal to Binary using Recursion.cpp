#include<iostream>
using namespace std;

void toBinary(int n) {
    if(n == 0) return;
    toBinary(n / 2);
    cout << n % 2;
}

int main() {
    toBinary(10);
}
