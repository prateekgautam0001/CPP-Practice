#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Outer {
    T1 outerVal;
public:
    Outer(T1 val) : outerVal(val) {}
    template <typename T3>
    class Inner {
        T3 innerVal;
    public:
        Inner(T3 val) : innerVal(val) {}
        void show(T1 outerVal) {
            cout << outerVal << " " << innerVal << endl;
        }
    };
};

int main() {
    Outer<int, double> o(5);
    Outer<int, double>::Inner<string> i("Inner");
    i.show(5);
}
