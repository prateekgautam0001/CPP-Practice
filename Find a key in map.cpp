#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "A"}, {2, "B"}};
    if(m.find(2) != m.end()) cout << "Found";
    else cout << "Not Found";
}
