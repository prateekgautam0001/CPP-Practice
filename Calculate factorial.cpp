#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}
