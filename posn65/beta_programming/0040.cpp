#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    cin.tie(0) -> ios_base::sync_with_stdio(false);
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s == "2" || s[s.size() - 1] % 2 == 1) cout << 'T' << endl;
        else cout << 'F' << endl;
    }
    return 0;
}