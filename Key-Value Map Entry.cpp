#include <iostream>
using namespace std;

template <typename K, typename V>
class MapEntry {
    K key;
    V value;
public:
    MapEntry(K k, V v) : key(k), value(v) {}
    void print() { cout << key << ": " << value << endl; }
};

int main() {
    MapEntry<string, int> e("Age", 30);
    e.print();
}
