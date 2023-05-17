#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)
#define pii pair<int, int>
#define vii vector<pair<int, int>>

#define f first
#define s second

int main() {
    boost; int n, m, k; cin >> n >> m >> k;
    int l; cin >> l;
    vector<pii> adj[n + 1];
    vector<int> minDis(n, INT_MAX);
    
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    priority_queue<pii, vii, greater<pii>> pq;
    pq.emplace(0, l); minDis[l] = 0;
    while (!pq.empty()) { 
        auto [dis, cur] = pq.top();
        pq.pop();
        for (pii next: adj[cur]) { 
            if (minDis[next.f] > dis + next.s) 
                minDis[next.f] = dis + next.s;
                pq.emplace(dis + next.s, next.f); 
        }
    }

    int maxval = 0;
    for (int i = 2; i <= n; i++) maxval = max(maxval , minDis[i]);
    return 0;
}