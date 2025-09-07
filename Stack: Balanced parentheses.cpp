#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s = "{[()]}";
    stack<char> st;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') st.push(c);
        else {
            if(st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')) {
                cout << "Unbalanced"; return 0;
            }
            st.pop();
        }
    }
    cout << (st.empty() ? "Balanced" : "Unbalanced");
}
