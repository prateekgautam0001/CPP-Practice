#include<iostream>
using namespace std;

void checkEvenOdd(int num) {
    if(num % 2 == 0)
        cout << num << " is Even\n";
    else
        cout << num << " is Odd\n";
}

int main() {
    checkEvenOdd(11);
    return 0;
}
