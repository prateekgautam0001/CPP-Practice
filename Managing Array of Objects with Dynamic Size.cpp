#include <iostream>
using namespace std;

class Data {
    int value;
public:
    void set(int v) { value = v; }
    void display() { cout << "Value: " << value << endl; }
};

int main() {
    int n;
    cin >> n;
    Data* arr = new Data[n];
    for (int i = 0; i < n; ++i)
        arr[i].set(i * 2);
    for (int i = 0; i < n; ++i)
        arr[i].display();
    delete[] arr;
    return 0;
}
