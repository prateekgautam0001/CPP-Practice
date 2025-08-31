#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;
public:
    Book(string t = "Unknown", int p = 100) {
        title = t;
        pages = p;
    }
    void info() {
        cout << title << ": " << pages << " pages" << endl;
    }
};

int main() {
    Book b1, b2("C++ Guide", 450);
    b1.info();
    b2.info();
    return 0;
}
