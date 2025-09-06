#include <iostream>
using namespace std;

template <typename A, typename B>
class Tuple {
    A first;
    B second;
public:
    Tuple(A a, B b) : first(a), second(b) {}
    void show() { cout << first << " " << second << endl; }
};

int main() {
    Tuple<string, bool> t("Valid", true);
    t.show();
}
