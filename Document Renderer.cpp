#include <iostream>
using namespace std;

class Document {
public:
    virtual void render() = 0;
};

class PDF : public Document {
public:
    void render() {
        cout << "Render PDF\n";
    }
};

class Word : public Document {
public:
    void render() {
        cout << "Render Word\n";
    }
};

int main() {
    Document* d = new PDF();
    d->render();
    delete d;
}
