#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int pages;

    void setData(string t, int p) {
        title = t;
        pages = p;
    }

    bool hasMorePages(Book b) {
        return pages > b.pages;
    }
};

int main() {
    Book b1, b2;
    b1.setData("Book1", 300);
    b2.setData("Book2", 150);

    if (b1.hasMorePages(b2))
        cout << "Book1 has more pages.\n";
    else
        cout << "Book2 has more or equal pages.\n";

    return 0;
}
