#include <bits/stdc++.h>
using namespace std;

#define boost cin.tie(nullptr)->ios_base::sync_with_stdio(false)
#define pii pair<int, int>
#define vii vector<pair<int, int>>

int main() {
    boost; int n, m, L, s, t; cin >> n >> m >> L >> s >> t;
    vector<pii> adj[n + 1];
    
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    priority_queue<pii> pq;
    vector<int> minDis(n, INT_MAX);
    minDis[s] = 0, pq.emplace(0, s);    
    while (!pq.empty()) {
        int dis = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        for (auto next: adj[cur]) {
            if (minDis[next.first] > dis + next.second) {
                minDis[next.first] = dis + next.second;
                pq.emplace(dis + next.second, next.first);
            }
        }
    }   

    if (minDis[t] > L) { cout << "NO" << endl; return 0; }

    vector<int> minDis2(n, INT_MAX);
    minDis2[t] = 0, pq.emplace(0, t);
    while (!pq.empty()) {
        int dis = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        for (auto next: adj[cur]) {
            if (minDis2[next.first] > dis + next.second) {
                minDis2[next.first] = dis + next.second;
                pq.emplace(dis + next.second, next.first);
            }
        }
    }
    
    if (minDis2[t] != L)  { cout << "NO" << endl; return 0; }
        cout << "YES" << endl;
        // print คำตอบยังไงดีวะ    
    return 0;
}