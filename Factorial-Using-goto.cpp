#include <iostream>
using namespace std;

int main() {
    int n, fact = 1, i = 1;
    cout << "Enter a number: ";
    cin >> n;

loop:
    if (i <= n) {
        fact *= i;
        i++;
        goto loop;
    }

    cout << "Factorial is: " << fact << endl;
    return 0;
}