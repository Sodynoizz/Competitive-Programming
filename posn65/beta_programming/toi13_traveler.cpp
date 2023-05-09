#include <bits/stdc++.h>
using namespace std;

#define vii vector<pair<int, int>>
#define pii pair<int, int>
vector<vii> adj(10005);

int main() {
    int n, m; cin >> n >> m;    
    int start, end, d; cin >> start >> end >> d;
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    priority_queue<pii, vii, greater<pii>> pq;
    vector<int> minDis(n, INT_MAX);
    pq.emplace(0, start); minDis[start] = 0;
    while (!pq.empty()) {
        int dis = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        for (auto it: adj[cur]) {
            int next = it.first;
            int total = it.second + dis;
            if (minDis[next] > total) {
                minDis[next] = total;
                pq.emplace(total, next);
            }
        }
    }

    if (minDis[end] <= d) { cout << end << ' ' << minDis[end] << " 0"; return 0; }

    vector<int> minDis2(n, INT_MAX);
    priority_queue<pii, vii, greater<pii>> pq2;
    pq2.emplace(0, end); minDis2[end] = 0;
    while (!pq2.empty()) {
        int dis = pq2.top().first;
        int cur = pq2.top().second;
        pq2.pop();
        for (auto it: adj[cur]) {
            int next = it.first;
            int total = it.second + dis;
            if (minDis2[next] > total) {
                minDis2[next] = total;
                pq2.emplace(total, next);
            }
        }
    }

    int pos, val = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (minDis[i] <= d && minDis2[i] < val) {
            pos = i;
            val = minDis2[i];
        }
    }

    cout << pos << ' ' << minDis[pos] << ' ' << minDis2[pos];
    return 0;
}