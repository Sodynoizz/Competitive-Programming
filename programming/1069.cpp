#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    stack<char> st;
    int n; cin >> n;
    while(n--) {
        char a; cin >> a;
        if (st.empty() || st.top() != a) st.emplace(a);
        else if (a == st.top()) {
            st.pop();
        }   
    }
    if (st.empty()) {
        cout << "0" << endl << "empty";
    } else {
        cout << st.size() << endl;
        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
    }

    return 0;
}