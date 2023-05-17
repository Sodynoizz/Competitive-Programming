#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false);

int main() {
    int n; cin >> n;
    while (n--) {
        string s = {};
        char c;
        int x, maxval = 0, cnt = 0; cin >> x;
        for (int i = 0; i < x; i++) { cin >> c; s += c; }
        for (auto j: s) {
            if (j == '0') cnt++, maxval = max(maxval, cnt);
            else cnt = 0;
        }
        cout << maxval << endl;
    }
    return 0;
}