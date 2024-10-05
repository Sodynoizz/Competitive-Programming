#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false);
#define endl '\n'

#define pii pair<int, int>
#define vii vector<pair<int, int>>
#define f first
#define s second

vector<pii> adj[100005];

int main() {
    boost; int n ,m, s, t; cin >> n >> m >> s >> t;
    int total = 0;
    vector<int> minDis(n, INT_MAX);
    vector<int> minDis2(n, INT_MAX);
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
        total += w;
    }

    priority_queue<pii, vii, greater<pii>> pq;
    minDis[s] = 0, pq.emplace(0, s);
    while (!pq.empty()) {
        int dis = pq.top().f;
        int cur = pq.top().s;
        pq.pop();
        for (pii next: adj[cur]) {
            if (minDis[next.f] > dis + next.s) {
                minDis[next.f] = dis + next.s;
                pq.emplace(dis + next.s, next.f);
            }
        }
    }

    priority_queue<pii, vii, greater<pii>> pq2;
    minDis2[t] = 0, pq2.emplace(0, t);
    while (!pq2.empty()) {
        int dis = pq2.top().f;
        int cur = pq2.top().s;
        pq2.pop();
        for (pii next: adj[cur]) {
            if (minDis2[next.f] > dis + next.s) {
                minDis2[next.f] = dis + next.s;
                pq2.emplace(dis + next.s, next.f);
            }
        }
    }
    
    int res = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            int v = adj[i][j].f;
            res = max(res, total - minDis[i] - minDis2[v]);
        }
    }
    cout << res;
    return 0;    
}