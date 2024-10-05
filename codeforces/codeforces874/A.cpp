#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    int n; cin >> n;
    while (n--) {
        map<string, int> mp;
        int m; cin >> m; char c[m]; cin >> c;
        for (int i = 0; i < m - 1; i++) {
            string s;
            s.push_back(c[i]), s.push_back(c[i + 1]);
            mp[s]++;
        }
        cout << mp.size() << endl;
    }
    return 0;
}