#include<iostream>
using namespace std;

void assign100(int &a) {
    a = 100;
}

int main() {
    int x = 0;
    assign100(x);
    cout << "Assigned value: " << x;
    return 0;
}
