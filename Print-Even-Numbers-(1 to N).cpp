#include <iostream>
using namespace std;

int main() {
    int i = 1, n;

    cout << "Enter n: ";
    cin >> n;

print:
    if (i <= n) {
        if (i % 2 == 0)
            cout << i << " ";
        i++;
        goto print;
    }

    return 0;
}