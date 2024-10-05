#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    stack<int> st;
    vector<int> v;
    bool check = false;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) st.push(s[i] - '0');
        if (s[i] == '$') { check = true; continue; }
        if (check) {
            int n = st.top(); st.pop();
            int m = st.top(); st.pop();
            st.push((4 * m + 3 * n) % 10);
            check = false;
        }
    }
    while (!st.empty()) { v.emplace_back(st.top()); st.pop(); }
    reverse(v.begin(), v.end());
    int ans = (v[0] * v[1]) % 10;
    for (int i = 2; i < v.size(); i++) ans = (ans * v[i]) % 10;
    cout << ans;
    return 0;
}