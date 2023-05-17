#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vii vector<pair<int, int>>

int main() {
    int n; cin >> n;
    vector<pii> adj[n + 1];

    int dis[n + 1]; for (int i = 0; i < n + 1; i++) dis[i] = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    priority_queue<pii, vii, greater<pii>> pq;
    pq.emplace(0, 1); dis[1] = 0;

    while (!pq.empty()) {
        int dist = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        for (auto x: adj[cur]) {
            int next = x.first;
            int tot = x.second;
            
            if (dis[next] > dist + tot) {
                dis[next] = dist + tot;
                pq.emplace(dis[next], next);
            }
        }
    }
    
    int maxval = 0;
    for (int i = 2; i <= n; i++) maxval = max(maxval, dis[i]);
    cout << maxval;
}