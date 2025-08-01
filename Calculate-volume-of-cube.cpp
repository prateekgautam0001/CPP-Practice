#include <iostream>
using namespace std;

int volume(int);

int main() {
    cout << volume(4);
    return 0;
}

int volume(int a) {
    return a * a * a;
}