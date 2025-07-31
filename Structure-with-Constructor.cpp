#include <iostream>
using namespace std;

struct Book {
    string title;
    int pages;
    Book(string t, int p) {
        title = t;
        pages = p;
    }
};

int main() {
    Book b("C++ Basics", 300);
    cout << "Title: " << b.title << ", Pages: " << b.pages << endl;
    return 0;
}