#include<bits/stdc++.h>
using namespace std;
 
unordered_map<char, int> precedence = {{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}};
 
bool isOpp(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}
 
bool detPrecedence(char op1, char op2) {
    return precedence[op1] >= precedence[op2];
}
 
string rpn(const string& infix) {
    stack<char> st;
    string postfix;
 
    for (char c : infix) {
        if (isalpha(c)) {
            postfix += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        } else if (isOpp(c)) {
            while (!st.empty() && st.top() != '(' && detPrecedence(st.top(), c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
 
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
 
    return postfix;
}
 
int main() {
    int t;
    cin >> t;
    cin.ignore();
 
    while (t--) {
        string infix;
        getline(cin, infix);
        string postfix = rpn(infix);
        cout << postfix << endl;
    }
 
    return 0;
}
