#include <iostream>
using namespace std;

void print(char ch, int times) {
    for (int i = 0; i < times; i++) cout << ch;
    cout << endl;
}

void print(string str, int times) {
    for (int i = 0; i < times; i++) cout << str << endl;
}

int main() {
    print('*', 5);
    print("Hello", 3);
    return 0;
}
