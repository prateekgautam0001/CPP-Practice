#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Range {
    T1 start;
    T2 end;
public:
    Range(T1 s, T2 e) : start(s), end(e) {}
    void display() {
        for (int i = start; i <= end; i++)
            cout << i << " ";
        cout << endl;
    }
};

int main() {
    Range<int, int> r(1, 5);
    r.display();
}
