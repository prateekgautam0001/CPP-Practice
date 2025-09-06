#include <iostream>
using namespace std;

template <typename T>
class Printer {
public:
    void print(T value) { cout << value << endl; }
};

template <>
class Printer<char> {
public:
    void print(char value) { cout << "Character: " << value << endl; }
};

int main() {
    Printer<int> p1;
    Printer<char> p2;
    p1.print(123);
    p2.print('A');
}
