#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vii = vector<pair<int, int>>;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v;
    bool vis[10] = {false};
    for (int i = 0; i < m; i++) {
        int x; cin >> x; 
        vis[x] = true;
    }

    for (int i = 1; i <= n; i++) v.emplace_back(i);
    
    do {
        if (vis[v[0]]) continue;
        else for (auto &e: v) cout << e << ' '; cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}