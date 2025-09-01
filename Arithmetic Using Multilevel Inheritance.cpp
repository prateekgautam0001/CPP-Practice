#include <iostream>
using namespace std;

class Base {
protected:
    int a, b;
public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
};

class Intermediate : public Base {
protected:
    int sum;
public:
    void computeSum() {
        sum = a + b;
    }
};

class Derived : public Intermediate {
public:
    void showSum() {
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    Derived obj;
    obj.setData(10, 20);
    obj.computeSum();
    obj.showSum();
    return 0;
}
