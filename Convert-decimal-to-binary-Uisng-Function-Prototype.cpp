#include <iostream>
using namespace std;

void decToBin(int);

int main() {
    decToBin(13);
    return 0;
}

void decToBin(int n) {
    int bin[32], i = 0;
    while(n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    for(int j = i - 1; j >= 0; j--)
        cout << bin[j];
}