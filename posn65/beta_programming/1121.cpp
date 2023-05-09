#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)
#define endl '\n' 

int main() { 
    boost; int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        stack<int> st;
        bool ch = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' or s[i] == '[' || s[i] == '{') st.emplace(s[i]);
            else if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') st.pop();
                else { ch = false; break; }
            }
            else if (s[i] == ']') {
                if (st.empty()) { ch = false; break; }
                else if (st.empty() || st.top() != '[') { ch = false; break; }
                else st.pop();
            }
            else if (s[i] == '}') {
                if (st.empty()) { ch = false; break; }
                else if (st.empty() || st.top() != '{') { ch = false; break; }
                else st.pop();
            }
        }
        if (ch && st.empty()) cout << "yes"; else cout << "no";
        cout << endl;
    }
}