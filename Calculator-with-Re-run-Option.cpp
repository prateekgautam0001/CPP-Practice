#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op, choice;

start:
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+': cout << "Result: " << a + b << endl; break;
        case '-': cout << "Result: " << a - b << endl; break;
        case '*': cout << "Result: " << a * b << endl; break;
        case '/': cout << "Result: " << (b != 0 ? a / b : 0) << endl; break;
        default: cout << "Invalid operator!\n";
    }

    cout << "Do you want to try again? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') goto start;

    return 0;
}