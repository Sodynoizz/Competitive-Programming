#include <bits/stdc++.h>
using namespace std;

#define getval(x, res) get<x>(res)

vector<tuple<int, int, int>> adj[305];
int dis[305][2005];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, k, st, ed, ans = 0; cin >> n >> m >> k >> st >> ed;

    for (int i = 0; i < m; i++) {
        int a, b, c, w; cin >> a >> b >> c >> w;
        adj[a].emplace_back(b, c, w);
        adj[b].emplace_back(a, c, w);
    }

    memset(dis, -1, sizeof(dis));
    dis[st][0] = 0;

    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= n; j++) {
            for (auto val: adj[j]) {
                if (i - getval(2, val) >= 0 && dis[j][i - getval(2, val)] >= 0) {
                    dis[getval(0, val)][i] = max(dis[getval(0, val)][i], dis[j][i - getval(2, val)] + getval(1, val)); 
                }
            }
        }
    }

    for (int i = 0; i <= k; i++) ans = max(ans, dis[ed][i]);
    ans == 0 ? cout << "Impossible" : cout << ans;
    return 0;
}