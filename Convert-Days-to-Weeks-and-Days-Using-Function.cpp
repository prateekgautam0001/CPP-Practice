#include <iostream>
using namespace std;

void convert(int days) {
    cout << "Weeks: " << days / 7 << ", Days: " << days % 7;
}

int main() {
    convert(20);
    return 0;
}