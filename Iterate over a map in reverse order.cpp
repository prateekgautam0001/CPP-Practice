#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    for(auto it = m.rbegin(); it != m.rend(); ++it)
        cout << it->first << " " << it->second << endl;
}
