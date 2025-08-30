#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString(const MyString& source) {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }

    void show() {
        cout << "String: " << str << endl;
    }

    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2 = s1; // invokes copy constructor
    s2.show();
    return 0;
}
