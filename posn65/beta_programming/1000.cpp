#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(NULL)->ios_base::sync_with_stdio(false)

int main() {
    boost;
    int n, m; cin >> n >> m;
    bool flag = true;
    string prev, cur;
    cin >> prev;
    for (int i = 1; i < m; i++) {
        int cnt = 0;
        cin >> cur;
        for (int j = 0; j < cur.size() && flag; j++) {
            if (prev[j] != cur[j]) cnt++;
            if (cnt > 2) flag = false, cout << prev;
        }        
        prev = cur;
    }
    if (flag) cout << prev;
    return 0;
}