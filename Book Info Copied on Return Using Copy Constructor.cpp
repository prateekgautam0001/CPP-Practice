#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;
public:
    Book(string t, int p) {
        title = t;
        pages = p;
    }
    Book(const Book &b) {
        title = b.title;
        pages = b.pages;
    }
    void show() {
        cout << title << ": " << pages << endl;
    }
};

Book copyBook(Book b) {
    return b;
}

int main() {
    Book b1("C++ Mastery", 350);
    Book b2 = copyBook(b1);
    b2.show();
    return 0;
}
