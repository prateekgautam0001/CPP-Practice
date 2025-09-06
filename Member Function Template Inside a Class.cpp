#include <iostream>
using namespace std;

class Printer {
public:
    template <typename T>
    void print(T value) {
        cout << value << endl;
    }
};

int main() {
    Printer p;
    p.print(100);
    p.print("Hello");
}
